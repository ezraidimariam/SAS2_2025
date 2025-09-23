#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Entrez la vitesse en km/h : ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("%.2f km/h correspond a %.2f m/s\n", kmh, ms);

    return 0;
}
