//
// Created by morga on 06/10/2021.
//
#include "Structures.h"
#include "Exercices.h"
#define TAILLE_MAX_TAB1 100
#define NOMBRE_COLONNE 4
#define NOMBRE_LIGNE 3
#define TAILLE_MAX_LIST 12

#ifndef TP5_FONCTIONS_H
#define TP5_FONCTIONS_H

void afficherChoix();
NombreRationnel multRationnel(NombreRationnel a, NombreRationnel b);
NombreRationnel additionRationnel(NombreRationnel a, NombreRationnel b);
int saisirEntier();
int addOuMult();
NombreRationnel saisirRationnel();
int maximum(int a[TAILLE_MAX_TAB1], int nombreValSaisie);
int saisieTableau(int tableau[TAILLE_MAX_TAB1]);
int affichageTableau(int tableau[TAILLE_MAX_TAB1], int nombreValSaisie);
int cast(int tableau[NOMBRE_LIGNE][NOMBRE_COLONNE], int liste[TAILLE_MAX_LIST]);
int saisieMatrice(int matrice[NOMBRE_LIGNE][NOMBRE_COLONNE]);
int saisirCoeffMat();
int pgcd(NombreRationnel nbR1);
NombreRationnel simplification(NombreRationnel nbR1, int pgcd1);


#endif //TP5_FONCTIONS_H
