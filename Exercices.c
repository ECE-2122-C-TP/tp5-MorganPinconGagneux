//
// Created by morga on 06/10/2021.
//

#include <stdio.h>
#include "Exercices.h"
#include "Fonctions.h"
#include "Structures.h"

#define TAILLE_MAX_TAB1 100
#define NOMBRE_COLONNE 4
#define NOMBRE_LIGNE 3
#define TAILLE_MAX_LIST 12



/* Réalise l'exercice 1 : demande a l'utilisateur une fraction puis s'il veut faire une addition ou une multiplication avec une autre fraction. Le résultat final s'affiche une fois qu'on ne souhaite plus faire d'opérations et qu'on saisit 0 lors du choix de l'opération.
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : rien
 * */

int Exercice1()
{
    NombreRationnel rationnel1 = {0, 1}, rationnel2 = {0,1};
    int choix = 0, pgcd1 = 0;
    rationnel1 = saisirRationnel();
    choix = addOuMult();
    do
    {
        switch (choix)
        {
            case 1 :
                rationnel2 = saisirRationnel();
                rationnel1 = additionRationnel(rationnel1, rationnel2);
                choix = addOuMult();
                break;
            case 2 :
                rationnel2 = saisirRationnel();
                rationnel1 = multRationnel(rationnel1, rationnel2);
                choix = addOuMult();
                break;

            default :
                choix = addOuMult();
                break;
        }
    } while (choix != 0);
    pgcd1 = pgcd(rationnel1);
    rationnel1 = simplification(rationnel1, pgcd1);
    printf("Le resultat est : %d / %d\n Soit %f\n", rationnel1.num, rationnel1.den, (float) rationnel1.num / (float) rationnel1.den);
    return(0);
}







/* Réalise l'exercice 2 : demande a l'utilisateur de saisir un nombre de valeurs entieres qu'il a decidé (mais inferieur a 100), stock ces données dans un tableau et renvoie le maximum
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : rien
 * */

int Exercice2()
{
    int tableau[TAILLE_MAX_TAB1]={0};
    int max = 0, nombreValSaisie = 0;
    nombreValSaisie = saisieTableau(tableau);
    max = maximum(tableau, nombreValSaisie);
    printf("La valeur maximale saisie est %d\n", max);
    return(0);
}





/* Réalise l'exercice 3 : Transforme un tableau a deux dimensions (3*4) en un tableau a une dimension (12)
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : rien
 * */

int Exercice3()
{
    int matrice[NOMBRE_LIGNE][NOMBRE_COLONNE], liste[TAILLE_MAX_LIST];
    saisieMatrice(matrice);
    cast(matrice, liste);
    affichageTableau(liste, TAILLE_MAX_LIST);
    return(0);
}




/*Réalise l'exercice du discord : donne la fraction simplifié d'une fraction
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : rien
 * */

int ExerciceDiscord()
{
    NombreRationnel rationnel1;
    int pgcd1 = 0;
    rationnel1 = saisirRationnel();
    pgcd1 = pgcd(rationnel1);
    if (pgcd1 !=0)
    {
        rationnel1 = simplification(rationnel1, pgcd1);
        printf("La fraction simplifie est %d/%d\n", rationnel1.num, rationnel1.den);
    }
    else
    {
        printf("Cette fraction est deja simplifie\n");
    }
    return(0);
}
