#include <gtk/gtk.h>

typedef struct nouveau
{
	char nom[50];
	char login[50];
	char password[50];
	char email[50];
	char cin[50];
	char num[50];
	int id;
}nouveau;
int verif(char login[],char password[]);
void supprimer(char login[],char password[]);
void ajouter(nouveau n);
void afficher_agents(GtkWidget *liste);
