//
// Created by morga on 06/10/2021.
//

#include "Fonctions.h"
#include <stdio.h>
#include "Structures.h"
#include "Exercices.h"

#define TAILLE_MAX_TAB1 100
#define NOMBRE_COLONNE 4
#define NOMBRE_LIGNE 3
#define TAILLE_MAX_LIST 12



/*affiche la question du choix de l'exercice
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : rien
 * */

void afficherChoix()
{
    printf("\nSaisissez le numero de l exercice souhaite ou 0 si vous desirez arretez le programme (et 4 pour l exercice du discord)\n");
    return;
}




/*fait une multiplication de deux fractions
 * Parametres :
 * - INOUT : rien
 * - IN : a, la premiere fraction
 *        b, la deuxieme fraction
 * - OUT : a, la multiplication des deux fractions
 * */

NombreRationnel multRationnel(NombreRationnel a, NombreRationnel b)
{
    a.num = a.num*b.num;
    a.den = a.den*b.den;
    return(a);
}




/*fait une addition de deux fractions
 * Parametres :
 * - INOUT : rien
 * - IN : a, la premiere fraction
 *        b, la deuxieme fraction
 * - OUT : a, l'addition des deux fractions
 * */

NombreRationnel additionRationnel(NombreRationnel a, NombreRationnel b)
{
    a.num = a.num*b.den+b.num*a.den;
    a.den = a.den*b.den;
    return(a);
}



/*permet de faire saisir un entier a l'utilisateur
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : n, l'entier saisie par l'utilisateur
 * */
int saisirEntier()
{
    int n=0;
    printf("Saisissez un entier :\n");
    scanf("%d",&n);
    return(n);
}



/*demande a l'utilisateur s'il veut faire un emultiplication ou une addition
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : choix, s'il vaut 1 alors l'utilisateur veut faire une addition, s'il vaut 2 alors l'utilisateur veut faire une multiplication
 * */

int addOuMult()
{
    int choix=0;
    printf("Voulez vous faire une addition (1) ou une multiplication (2) ou arreter (0)\n");
    scanf("%d", &choix);
    printf("\n");
    return(choix);
}



/*Permet de saisir un nombre rationnel
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : rationnel, renvoie le nombre rationnel saisie par l'utilisateur
 * */

NombreRationnel saisirRationnel()
{
    NombreRationnel rationnel = {0, 1};
    printf("Saisissez le numerateur puis le denominateur\n");
    rationnel.num = saisirEntier();
    rationnel.den = saisirEntier();
    printf("\n");
    return(rationnel);
}





/*Permet d'obtenir le maximum d'un tableau
 * Parametres :
 * - INOUT : a[TAILLE_MAX_TAB1], tableau de valeur ou on cherche le maximum
 * - IN : nombreValSaisie, nombre de valeurs utiles dans le tableau ou on cherche le maximum (nombre de valeurs rentré par l'utilisateur)
 * - OUT : maximum, le maximum du tableau
 * */

int maximum(int a[TAILLE_MAX_TAB1], int nombreValSaisie)
{
    int maximum = a[0];
    for (int i=1; i<nombreValSaisie; i++)
    {
        if (maximum<a[i])
        {
            maximum = a[i];
        }
    }
    return(maximum);
}





/*Permet de rentrer des valeurs dans un tableau a une dimension, quant au nombre de valeurs saisie : il est choisit par l'utilisateur au debut du programme mais il doit être inferieur [TAILLE_MAX_TAB1]
 * Parametres :
 * - INOUT : tableau[TAILLE_MAX_TAB1], tableau dans lequel on souhaite saisir nos données
 * - IN : rien
 * - OUT : nombreValSaisie, renvoie le nombre de valeurs qu'a rentré l'utilisateur dans le tableau (la taille utile)
 * */

int saisieTableau(int tableau[TAILLE_MAX_TAB1])
{
    int nombreValSaisie = 0;
    printf("Nombre de valeur(s) que vous souhaitez rentrer\n");
    nombreValSaisie = saisirEntier();
    printf("\n");
    if (nombreValSaisie<=0 || nombreValSaisie>100)
    {
        printf("ERREUR : l'entier saisie n est pas compris entre 1 et 100\n");
    }
    for (int i=0; i<nombreValSaisie; i++)
    {
        tableau[i]=saisirEntier();
    }
    return(nombreValSaisie);
}




/* Affiche le tableau a une dimension souhaité
 * Parametres :
 * - INOUT : tableau[TAILLE_MAX_TAB1], tableau que l'on souhaite afficher
 * - IN : nombreValSaisie, taille utile du tableau : nombre de valeurs qu'on a rentré dans le tableau
 * - OUT : rien
 * */

int affichageTableau(int tableau[TAILLE_MAX_TAB1], int nombreValSaisie)
{
    for (int i=0; i<nombreValSaisie; i++)
    {
        printf("%d\t", tableau[i]);
    }
    printf("\n");
    return(0);
}




/* Transforme un tableau a deux dimensions(3*4) en un tableau a une dimension(12)
 *  Parametres :
 * - INOUT : tableau[NOMBRE_LIGNE][NOMBRE_COLONNE],  tableau a deux dimensions (3*4) que l'on souhaite transforme
 *           liste[TAILLE_MAX_LIST], tableau a une dimension (12) qui va acceuillir les valeurs du tableau a deux dimensions
 * - IN : rien
 * - OUT : rien
 * */

int cast(int tableau[NOMBRE_LIGNE][NOMBRE_COLONNE], int liste[TAILLE_MAX_LIST])
{
    for (int i=0; i<NOMBRE_LIGNE; i++)
    {
        for (int j=0; j<NOMBRE_COLONNE; j++)
        {
            liste[i*NOMBRE_COLONNE+j] = tableau[i][j];
        }
    }
    return(0);
}



/* Permet de saisir des valeurs entieres dans un tableau a deux dimensions (3*4)
 *  Parametres :
 * - INOUT : matrice[NOMBRE_LIGNE][NOMBRE_COLONNE],  tableau a deux dimensions (3*4) ou l'on souhaite saisir les données
 * - IN : rien
 * - OUT : rien
 * */

int saisieMatrice(int matrice[NOMBRE_LIGNE][NOMBRE_COLONNE])
{
    printf("Saisissez une matrice\n");
    for (int i=0; i<NOMBRE_LIGNE; i++)
    {
        for (int j=0; j<NOMBRE_COLONNE; j++)
        {
            matrice[i][j] = saisirCoeffMat();
        }
        printf("\n");
    }
    return(0);
}





/* Meme fonction que saisirEntier mais sans le printf("Saisissez un entier") pour que ca soit plus beau etant donné qu'on saisit bcp d'entier
 *  Parametres :
 * - IN : rien
 * - OUT : rien
 * */

int saisirCoeffMat()
{
    int n=0 ;
    scanf("%d",&n);
    printf("\t");
    return(n);
}





/* Permet d'obtenir le pgcd du numérateur et du dénominateur d'une fraction'
 *  Parametres :
 * - IN : nbR1, nombre Rationnel dont on souhaite obtenir le pgcd de son numérateur et denominateur
 * - OUT : pgcd, renvoie le PGCD du numérateur et du dénominateur constituant la fraction de nombre rationnel
 * */

int pgcd(NombreRationnel nbR1)
{
    int pgcd = 0, min=0;
    if (nbR1.num<nbR1.den)
    {
        min = nbR1.num;
    }
    else
    {
        min = nbR1.den;
    }
    for (int i=2; i<=min; i++)
    {
        if (nbR1.num % i==0 && nbR1.den % i==0)
        {
            pgcd = i;
        }
    }
    return(pgcd);
}




/* Permet de simplifier une fraction
 *  Parametres :
 * - IN : nbR1, la fraction que l'on souhaite simplifié
 *        pgcd1, le pgcd du numérateur et du dénominateur
 * - OUT : nbR1, la fraction simplifé
 * */

NombreRationnel simplification(NombreRationnel nbR1, int pgcd1)
{
    nbR1.num = nbR1.num/pgcd1;
    nbR1.den = nbR1.den/pgcd1;
    return(nbR1);
}