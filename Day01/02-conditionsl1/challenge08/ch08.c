#include <stdio.h>

int main() {
    float moyenne;

    printf("Entrez la moyenne de l'élève : ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Recalé\n");
    } 
    else if (moyenne >= 10 && moyenne < 12) {
        printf("Passable\n");
    } 
    else if (moyenne >= 12 && moyenne < 14) {
        printf("Assez bien\n");
    } 
    else if (moyenne >= 14 && moyenne < 16) {
        printf("Bien\n");
    } 
    else 
    {
        printf("Très bien\n");
    }

    return 0;
}
