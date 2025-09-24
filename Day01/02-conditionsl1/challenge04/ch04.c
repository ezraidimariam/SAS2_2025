#include <stdio.h>
#include <math.h>

int main() {
	    float a, b, c, d, x1, x2;

	   printf("Entrez a, b, c: ");
	   scanf("%f %f %f", &a, &b, &c);

	   d = b*b - 4*a*c;

	   if (d > 0)
	   {
		x1 = (-b - sqrt(d)) / (2*a);
		x2 = (-b + sqrt(d)) / (2*a);
		printf("Deux solutions: %.2f et %.2f\n", x1, x2);
	   }
	   else if (d == 0)
	   {
		x1 = -b / (2*a);
		printf("Une seule solution: %.2f\n", x1);
	   }
	   else
	   {
		printf("Pas de solutions reelles.\n");
													        
           }
           return 0;
}

