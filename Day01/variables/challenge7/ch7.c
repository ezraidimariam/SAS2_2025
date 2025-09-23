#include <stdio.h>

int main() {
    float n1, n2, n3, moyenne;

    printf("Entrez trois nombres : ");
    scanf("%f %f %f", &n1, &n2, &n3);

    moyenne = (n1*2 + n2*3 + n3*5) / 10;

    printf("La moyenne ponderee est : %.2f\n", moyenne);

    return 0;
}
