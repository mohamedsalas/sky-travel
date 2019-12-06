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
typedef struct lv
{
	char type[50];
	char nch[50];
	char date_a[50];
	char date_r[50];
	char prix[50];
}lv;
int verif(char login[],char password[]);
void supprimer(char login[],char password[]);
void ajouter(nouveau n);
void afficher_agents(GtkWidget *liste);
void supprimerlv(char type[],char nch[]);
