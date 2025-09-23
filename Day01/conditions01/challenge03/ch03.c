#include <stdio.h>

int main() {
    int a, b, somme;

    printf("Entrez le premier entier : ");
    scanf("%d", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);

    somme = a + b;

    if (a != b)
    {
        printf("Résultat = %d\n", somme);
    } 
    else 
    {
        printf("Résultat = %d\n", somme * 3);
    }

    return 0;
}
