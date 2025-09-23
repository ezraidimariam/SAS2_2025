#include <stdio.h>

int main() {
    float celsius, kelvin;

    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("Temperature en Kelvin : %.2f K\n", kelvin);

    return 0;
}
