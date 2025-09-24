#include <stdio.h>

int main() {
    char c;

    printf("Entrez un caractère : ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("Le caractère est une lettre majuscule.\n", c);
    } 
    else
    {
        printf("Le caractère n'est pas une lettre majuscule.\n", c);
    }

    return 0;
}
