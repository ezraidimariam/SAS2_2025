#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe, email[50];
    int age;

    printf("Entrez votre nom et prenom: ");
    scanf("%s %s", nom, prenom);

    printf("Entrez votre age: ");
    scanf("%d", &age);

    printf("Entrez votre sexe: ");
    scanf(" %c", &sexe);

    printf("Entrez votre adresse email: ");
    scanf("%s", email);

    printf("\n-------Vos informations personnelles sont:-------\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Email : %s\n", email);
    printf("------------------------------------------------------");

    return 0;
}
