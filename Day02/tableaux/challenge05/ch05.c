#include <stdio.h>

int	main()
{
	int	n;
	int	i = 0;

	printf("entrez les nombres des elements: ");
	scanf("%d", &n);

	int	tab[n];
	printf("entrez les elements du tableau:");
	
	for (i = 0; i < n; i++) 
        {
              scanf("%d", &tab[i]);
        }  

        int min = tab[0];

       for (i = 1; i < n; i++) 
       { 
            if (tab[i] < min)
            { 
                 min = tab[i];
            }
       }  

       printf("Min = %d\n", min);

      return 0;
}
	
