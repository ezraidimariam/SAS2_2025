#include <stdio.h>
#define MAX 100

int	main()
{
	char	titre[MAX][50], auteur[MAX][50];
	int	prix[MAX], quantite[MAX];
	int 	q_stock = 0;
	int	option;

	while (1)
	{
		printf("\n=================gestionnaire de stock==========\n\n");
		printf("[1] = Ajouter un livre au stock");
		printf("[2] = Afficher tous les livres disponibles.");
		printf("[3] = Rechercher un livre par son titre.");
		prinf("[4] mettre à jour la quantité d'un livre.");
		printf("[5] = Supprimer un livre du stock.");
		printf("[6] = Afficher le nombre total de livres en stock.");
		printf("[0] = exit\n");

		scanf("%d", &option);
	switch(option)
	{
	case 1:

	case 2:
	case 3:
	case 4:
	case 5:
	case 6:

	c						
