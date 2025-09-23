#include<stdio.h>

int	main()
{
	int	size;
	int	i = 0;
	int	inc = 0;

	printf("entrez les nombres des elements:");
	scanf("%d", &size);
	int tab[size];

	printf("entrez les elements:");
	
	while (i < size)
	{
	scanf("%d", &tab[i]);
	i++;
	}
	while (inc < size)
	{
		printf("%d ", tab[inc]);
		inc++;
	}
}
