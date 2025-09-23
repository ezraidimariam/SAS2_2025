#include <stdio.h>

int	main()
{
	int num;

	printf("entrez un nombre:");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("c un nombre pair");
	}
	else
	{
		printf("c un nombre umpair");
	}
}
