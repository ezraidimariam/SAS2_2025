#include <stdio.h>

int main() {
    int n;

    printf("Entrez un nombre:");
    scanf("%d", &n);

    if (n > 0) {
        printf("Le nombre %d est positif\n", n);
    } 
    else if (n < 0) {
        printf("Le nombre %d est negatif\n", n);
    } 
    else {
        printf("Le nombre est nul\n");
    }

    return 0;
}

