#include <stdio.h>

int main() {
    int taille;
    char choix;

    do {
        // Demander à l'utilisateur de choisir la taille de la matrice
        printf("Entrez la taille de la matrice : ");
        if (scanf("%d", &taille) != 1) {
            printf("Erreur de saisie.\n");
            while (getchar() != '\n'); // Vider le tampon d'entrée
            continue;
        }

        int tableau[taille][taille];
        int i, j, somme = 0;

        // Remplir le tableau
        for (i = 0; i < taille; i++) {
            for (j = 0; j < taille; j++) {
                printf("Entrez la valeur de tableau[%d][%d] : ", i, j);
                if (scanf("%d", &tableau[i][j]) != 1) {
                    printf("Erreur de saisie.\n");
                    while (getchar() != '\n'); // Vider le tampon d'entrée
                    j--;
                }
            }
        }

        // Calculer la somme de la diagonale principale
        for (i = 0; i < taille; i++) {
            somme += tableau[i][i];
        }

        printf("La somme de la diagonale principale est %d\n", somme);

        // Demander à l'utilisateur s'il veut refaire le calcul
        printf("Voulez-vous refaire le calcul ? (O/N) : ");
        do {
            choix = getchar();
        } while (choix != 'O' && choix != 'o' && choix != 'N' && choix != 'n');

        while (getchar() != '\n'); // Vider le tampon d'entrée

    } while (choix == 'O' || choix == 'o');

    return 0;
}
