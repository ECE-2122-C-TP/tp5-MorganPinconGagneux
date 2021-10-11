#include <stdio.h>
#include "Exercices.h"
#include "Fonctions.h"


/*demande a l'utilisateur l'exercice qu'il souhaite faire
 * Parametres :
 * - INOUT : rien
 * - IN : rien
 * - OUT : rien
 * */

int main() {
    int aire = 0, perimetre = 0, entierSaisie = 0, Total_Eleve = 0;
    float moy = 0.0f;

    int choixExercice = 0;

    afficherChoix();
    do {
        scanf("%d", &choixExercice);
        printf("\n");
        switch (choixExercice) {
            case 0 :
                printf("Merci d avoir utilise nos services\nBonne journee !\n");
                break;
            case 1 :
                Exercice1();
                afficherChoix();
                break;

            case 2 :
                Exercice2();
                afficherChoix();
                break;

            case 3 :
                Exercice3();
                afficherChoix();
                break;

            case 4 :
                ExerciceDiscord();
                afficherChoix();
                break;

            default :
                printf("Cet exercice n existe pas\n");
                break;
        }
    } while (choixExercice != 0);

    return (0);
}