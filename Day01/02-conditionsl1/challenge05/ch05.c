#include <stdio.h>

int main() {
	    float annee;

	    printf("Entrez une duree en annees : ");
	    scanf("%f", &annee);

            printf("\n%.2f annee = %.0f mois\n", annee, annee * 12);
            printf("%.2f annee = %.0f jours\n", annee, annee * 365);
            printf("%.2f annee = %.0f heures\n", annee, annee * 365 * 24);
	    printf("%.2f annee = %.0f minutes\n", annee, annee * 365 * 24 * 60);
	    printf("%.2f annee = %.0f secondes\n", annee, annee * 365 * 24 * 60 * 60);
	    return 0;
}
