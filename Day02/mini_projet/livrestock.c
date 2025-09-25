#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char titre[MAX][50], auteur[MAX][50];
    int prix[MAX], quantite[MAX];
    int n = 0;
    int option, i, j, total;
    char search[50];

    while (1) 
    {
        printf("\n================= Gestionnaire de Stock ===========\n\n");
        printf("[1] = Ajouter un livre au stock\n");
        printf("[2] = Afficher tous les livres disponibles\n");
        printf("[3] = Rechercher un livre par son titre\n");
        printf("[4] = Mettre à jour la quantité d'un livre\n");
        printf("[5] = Supprimer un livre du stock\n");
        printf("[6] = Afficher le nombre total de livres en stock\n");
        printf("[0] = exit\n");

        scanf("%d", &option);

        switch(option)
        {
            case 1: // Ajouter
                if(n < MAX)
                {
                    printf("Titre du livre : ");
                    scanf(" %[^\n]", titre[n]);
                    printf("Auteur du livre : ");
                    scanf(" %[^\n]", auteur[n]);
                    printf("Prix du livre : ");
                    scanf("%d", &prix[n]);
                    printf("Quantité : ");
                    scanf("%d", &quantite[n]);
                    n++;
                }
	 	else
                {
                    printf("Stock est plein!\n");
                }
                break;

            case 2: // Afficher
                printf("\n============ Liste des livres ============\n");
                printf("Titre                | Auteur             | Prix   | Quantite\n");
                printf("------------------------------------------------------------\n");
                for(i = 0; i < n; i++)
                {
                    printf("%-20s | %-18s | %-6d | %d\n", titre[i], auteur[i], prix[i], quantite[i]);
                }
                break;

            case 3: // Rechercher
                printf("Entrez le titre du livre à rechercher: ");
                scanf(" %[^\n]", search);
                for(i = 0; i < n; i++) 
                {
                    if(strcmp(titre[i], search) == 0)
		    {
                        printf("Trouvé: %s | %s | %d DH | %d\n", titre[i], auteur[i], prix[i], quantite[i]);
                    }
                }
                break;

            case 4: // Mettre à jour
                printf("Entrez le titre: ");
                scanf(" %[^\n]", search);
                for(i = 0; i < n; i++)
                {
                    if(strcmp(titre[i], search) == 0)
                    {
                        printf("Entrez la nouvelle quantite: ");
                        scanf("%d", &quantite[i]);
                        printf("Mise à jour réussie!\n");
                    }
                }
                break;

            case 5: // Supprimer
                printf("Entrez le titre à supprimer: ");
                scanf(" %[^\n]", search);
                for(i = 0; i < n; i++) {
                    if(strcmp(titre[i], search) == 0) {
                        for(j = i; j < n-1; j++) {
                            strcpy(titre[j], titre[j+1]);
                            strcpy(auteur[j], auteur[j+1]);
                            prix[j] = prix[j+1];
                            quantite[j] = quantite[j+1];
                        }
                        n--;
                        printf("livre supprimé avec succès!\n");
                        break;
                    }
                }
                break;

            case 6: // Total
                total = 0;
                for(i = 0; i < n; i++) 
			total += quantite[i];
                		printf("Nombre total de livres en stock: %d\n", total);
                		break;

            case 0: // Exit
                return 0;

            default:
                printf("Choix invalide!\n");
        }
    }
}
