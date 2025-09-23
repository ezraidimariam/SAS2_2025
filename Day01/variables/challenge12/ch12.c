#include <stdio.h>

int main() {
    int n, inverse;
	
    printf("entrez un nombre de 4 chiffres");
    scanf("%d", &n);

    int d1 = n / 1000;
    int d2 = (n / 100) % 10;
    int d3 = (n / 10) % 10;
    int d4 = n % 10;

    inverse = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    printf("%d\n", inverse);
    return 0;
}

