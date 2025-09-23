#include <stdio.h>

int main() {
    float km, yards;

    printf("Entrez la distance en kilometres : ");
    scanf("%f", &km);

    yards = km * 1093.61;

    printf("%.2f km correspond a %.2f yards\n", km, yards);

    return 0;
}
