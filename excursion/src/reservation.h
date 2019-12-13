#include <gtk/gtk.h>




typedef struct
{char date[20];
char destination[20];
float prix_excurtion;
int disp;

int id;
}excurtion;

typedef struct
{int jour;
int mois;
int annee;
}date;


typedef struct
{date date_reservation;
char destination[20];
char option[100];
char nom[20];
char prenom[20];
float prix_total;
int nbr;
int id;
}reservation;

void ajoutereservation_ex(reservation r);
void affichertoutesreservation_ex(GtkWidget *liste);
void supprimerservation_ex(int id);
int disponible_ex(int nb,char dest[20]);
float prix_total_excursion(int nb,char dest[20]);
void afficher_ex(GtkWidget *liste);
void afficher_chercher_ex(GtkWidget *liste);
void rechercher_ex(char dest[20]);



