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
typedef struct
{
    char comp[50],dest[50],date[50],dep[50];
    char prix[50],pro[5];
    

}vol;
typedef struct
{
	int prix_pd,prix_pc,prix_dp;
	int disp;

}chambre;
typedef struct
{
	char nom[50],nbr_etoile[50],lieu[50];
	chambre sing,doub,swe;
}hotel;
typedef struct
{
	char dest[50],date_a[50],pro[10],date_r[50],nom_hotel[50],type_trans[50];	
	int prix,disp;


}voyage;




int verif(char login[],char password[]);
void supprimer(char login[],char password[]);
void ajouter(nouveau n);
void afficher_agents(GtkWidget *liste);
void supprimerlv(char type[],char nch[]);
void supprimervol(char dest[],char comp[]);
void ajouter_hotel(hotel h);
void supprimerhotel(char lieu[],char nom[]);
void supprimervoyage(char dest[],char date[]);
void ajoutervoyage(voyage v);
void supprimer_client(char login[],char password[]);
void ajouter_client(nouveau n);
