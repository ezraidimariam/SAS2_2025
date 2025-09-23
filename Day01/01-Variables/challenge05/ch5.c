#include <stdio.h>

int main() {
    float celsius;

    printf("Entrez la temperature en Celsius: ");
    scanf("%f", &celsius);

    if (celsius < 0)
        printf("l'eau est solide.\n", celsius);
    else if (celsius < 100)
        printf("l'eau est liquide.\n", celsius);
    else
        printf("l'eau est gazeuse.\n", celsius);

    return 0;
}
