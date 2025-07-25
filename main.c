
#include <stdio.h>
#include "myFunction.h"

int main() {
    char phrase[] = "Bonjour le monde";
    int longueur;

    // Utilisation de myStrlen
    longueur = myStrlen(phrase);

    printf("La phrase '%s' contient %d caract�res.\n", phrase, longueur);
    puts("\n");
    //Utilisation de myStrcpy
    char original[] = "Salut";
    char copie[10];

    printf("-------Avant copie-------\n");
    printf("Original = '%s'\n", original);
    printf("Copie = '%s'\n", copie);

    printf("\-------Apres copie-------\n");
    printf("Original = '%s'\n", original);
    printf("copie: ");
    myStrcpy(copie, original);

    puts("\n");

    //Utilisation de myStrupr et myStrlwr

    char message[] = "Bonjour Tout Le Monde";

    printf("Original : %s\n", message);


    printf("En majuscules : ");
    myStrupr(message);

    printf("En minuscules : ");
    myStrlwr(message);

    puts("\n");

    char phrase2[] = "Bonjour tout le monde";
    char lettre ;
    int resultat;

    printf("Donnez la lettre a rechercher dans: %s\n",phrase2);
    scanf("%c",&lettre);

    resultat = myStrchr(phrase2, lettre);

    if (resultat == 1) {
        printf("La lettre '%c' a ete trouvee dans \"%s\"\n", lettre, phrase2);
    } else {
        printf("La lettre '%c' n'a pas ete trouvee dans \"%s\"\n", lettre, phrase2);
    }
    puts("\n");
    char phrase3[] = "J'apprends le langage C";
    char recherche[] = "langage";


    if (myStrstr(phrase3, recherche) == 1) {
        printf("Le mot '%s' est dans la phrase <<%s>>\n", recherche,phrase3);
    } else {
        printf("Le mot '%s' n'est pas dans la phrase <<%s>>\n", recherche,phrase3);
    }

    puts("\n");

    char mot1[] = "Bonjour";
    char mot2[] = "Bonjour";
    char mot3[] = "bonjour";
    int resultat2;


    resultat2 = myStrcmp(mot1, mot2);
    printf("Test 1:\n");
    printf("'%s' vs '%s'\n", mot1, mot2);
    printf("Resultat: %d\n", resultat2);


    resultat2 = myStrcmp(mot1, mot3);
    printf("\nTest 2:\n");
    printf("'%s' vs '%s'\n", mot1, mot3);
    printf("Resultat: %d\n", resultat2);

    myConjugaison("manger");

    return 0;
}
