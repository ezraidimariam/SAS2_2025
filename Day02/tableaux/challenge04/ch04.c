#include <stdio.h>

int main() {
    int n, i;
    int max;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];

    printf ("entrez les elements du tableau:");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &tab[i]);
    }

    max = tab[0];

    for (i = 1; i < n; i++) 
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }

    printf("Max = %d\n", max);

    return 0;
}

