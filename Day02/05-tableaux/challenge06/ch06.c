#include <stdio.h>

int main() {
    int n, i;
    int result, facteur;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];

    printf ("entrez les elements du tableau:");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &tab[i]);
    }

    printf ("entrez le facteur de multiplication");
    scanf ("%d", &facteur);

    for (int i = 0; i < n; i++)
    {
	printf ("%d x %d = %d\n", tab[i], facteur, tab[i] * facteur);
    }
}
