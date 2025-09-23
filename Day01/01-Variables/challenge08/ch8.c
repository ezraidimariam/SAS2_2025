#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, mg;

    printf("Entrez trois nombres : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    mg = pow(a * b * c, 1.0/3.0);

    printf("La moyenne geometrique est : %.2lf\n", mg);

    return 0;
}
