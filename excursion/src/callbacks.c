#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "reservation.h"
#include <string.h>



void on_confirmer_rex_clicked (GtkWidget *objet_graphique,gpointer user_data)
{
reservation r;
int x;

GtkWidget *nbro;
GtkWidget *input1, *input2,*input3;
	GtkWidget *Jour;
	GtkWidget *Mois;
	GtkWidget *Annee;
        GtkWidget *Combobox1_ex;
	GtkWidget *sortie;
	
	
nbro=lookup_widget(objet_graphique, "nb_ex");
r.nbr=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(nbro));
Combobox1_ex=lookup_widget(objet_graphique, "combobox1_ex");
	input1=lookup_widget(objet_graphique,"des_ex");
	input2=lookup_widget(objet_graphique,"nom_ex");
	input3=lookup_widget(objet_graphique,"prenom_ex");
        strcpy(r.destination,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(r.prenom,gtk_entry_get_text(GTK_ENTRY(input3)));
	sortie=lookup_widget(objet_graphique, "res_ex");
	Jour=lookup_widget(objet_graphique, "jour_ex");
	Mois=lookup_widget(objet_graphique, "mois_ex");
	Annee=lookup_widget(objet_graphique, "annee_ex");

	r.date_reservation.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Jour));
	r.date_reservation.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Mois));
	r.date_reservation.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(Annee));
strcpy(r.option,gtk_combo_box_get_active_text(GTK_COMBO_BOX(Combobox1_ex)));

r.prix_total=prix_total_excursion(r.nbr,r.destination);

	x=disponible_ex(r.nbr,r.destination);
if (x==0)
{
ajoutereservation_ex(r);
gtk_label_set_text(GTK_LABEL(sortie),"Reservation reussite."); 	
}
else
gtk_label_set_text(GTK_LABEL(sortie),"Reservation n est pas disponible.");

}



void on_retour_reserve_client_excursion_clicked (GtkWidget *objet,gpointer  user_data)
{

GtkWidget *window1,*window2;

window1=lookup_widget(objet,"fenetre_reserve_excursion");

gtk_widget_destroy(window1);

window2=create_fenetre_client_excursion();
gtk_widget_show(window2);
}




void on_retour_panier_client_excursion_clicked (GtkWidget *objet,gpointer  user_data)
{

GtkWidget *window1,*window2;

window1=lookup_widget(objet,"fenetre_panier_excursion");

gtk_widget_destroy(window1);

window2=create_fenetre_client_excursion();
gtk_widget_show(window2);
}

void on_modifier_reservation_excursion_clicked (GtkWidget *button,gpointer user_data)
{
GtkWidget *combobox1,*input1,*ide,*window1,*sortie2;	
	char mes[50];
	int id;
reservation r;
FILE*f;
FILE*f1;

  
	
	window1=lookup_widget(button,"fenetre_panier_excursion");
	combobox1=lookup_widget(window1,"combobox_modifier_rexcursion");
sortie2=lookup_widget(window1, "mod_rex");
ide=lookup_widget(window1, "idsm2");
id=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ide));

	input1=lookup_widget(window1,"modif_rexcursion");
	
	f=fopen("/home/oussema/Projets/excursion/src/reservationex.txt","r");
f1=fopen("/home/oussema/Projets/excursion/src/user7.txt","a+");

	while(fscanf(f,"%s %s %s %d/%d/%d %d %s %f %d\n",r.nom,r.prenom,r.destination,&r.date_reservation.jour,&r.date_reservation.mois,&r.date_reservation.annee,&r.nbr,r.option,&r.prix_total,&r.id)!=EOF)
		{
				
strcpy(mes,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));
				
if(strcmp(mes,"Destination")==0)
	{if (r.id==id)
           {strcpy(r.destination,gtk_entry_get_text(GTK_ENTRY(input1)));
              fprintf(f1,"%s %s %s %d/%d/%d %d %s %.2f %d\n",r.nom,r.prenom,r.destination,r.date_reservation.jour,r.date_reservation.mois,r.date_reservation.annee,r.nbr,r.option,r.prix_total,r.id);
}
else

fprintf(f1,"%s %s %s %d/%d/%d %d %s %.2f %d\n",r.nom,r.prenom,r.destination,r.date_reservation.jour,r.date_reservation.mois,r.date_reservation.annee,r.nbr,r.option,r.prix_total,r.id);
}




				
else if(strcmp(mes,"Nom")==0)
				{if (r.id==id)
           {
           strcpy(r.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
              fprintf(f1,"%s %s %s %d/%d/%d %d %s %.2f %d\n",r.nom,r.prenom,r.destination,r.date_reservation.jour,r.date_reservation.mois,r.date_reservation.annee,r.nbr,r.option,r.prix_total,r.id);
}


else

fprintf(f1,"%s %s %s %d/%d/%d %d %s %.2f %d\n",r.nom,r.prenom,r.destination,r.date_reservation.jour,r.date_reservation.mois,r.date_reservation.annee,r.nbr,r.option,r.prix_total,r.id);
}}

fclose(f);
fclose(f1);
remove("/home/oussema/Projets/excursion/src/reservationex.txt");
rename("/home/oussema/Projets/excursion/src/user7.txt","/home/oussema/Projets/excursion/src/reservationex.txt");
gtk_label_set_text(GTK_LABEL(sortie2),"Modification réussi.");
}




void on_actualiser_panier_clicked   (GtkWidget  *objet,gpointer user_data)
{
GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet,"fenetre_panier_excursion");
gtk_widget_destroy(window1);

window2=lookup_widget(objet,"fenetre_panier_excursion");
window2=create_fenetre_panier_excursion();

gtk_widget_show(window2);

treeview1=lookup_widget(window2,"treeview_panier");
affichertoutesreservation_ex(treeview1);

}




void on_reserver_excursion_client_clicked   (GtkWidget *objet,gpointer user_data)
{

GtkWidget *window1;
GtkWidget *window2;


window1=lookup_widget(objet,"fenetre_client_excursion");
gtk_widget_destroy(window1);

window2=lookup_widget(objet,"fenetre_reserve_excursion");
window2=create_fenetre_reserve_excursion();

gtk_widget_show(window2);

}


void on_panier_excursion_clicked  (GtkWidget *objet,gpointer user_data)
{

GtkWidget *window1;
GtkWidget *window2;
GtkWidget *treeview1;

window1=lookup_widget(objet,"fenetre_client_excursion");
gtk_widget_destroy(window1);

window2=lookup_widget(objet,"fenetre_panier_excursion");
window2=create_fenetre_panier_excursion();

gtk_widget_show(window2);

treeview1=lookup_widget(window2,"treeview_panier");

affichertoutesreservation_ex(treeview1);
}


void on_rechercher_client_excursion_clicked (GtkWidget  *objet_graphique,gpointer  user_data)
{
char des[20];
GtkWidget *input1;

input1=lookup_widget(objet_graphique,"chercher_agent_excursion");

strcpy(des,gtk_entry_get_text(GTK_ENTRY(input1)));
 
rechercher_ex(des);

gtk_entry_set_text(GTK_ENTRY(input1), "");
GtkWidget *treeview1;
treeview1 = lookup_widget(objet_graphique,"treeview_excursion_client");
afficher_chercher_ex(treeview1);
remove("/home/oussema/Projets/excursion/src/user3.txt");

}



void on_afficher_client_excursion_clicked (GtkWidget  *objet_graphique,gpointer  user_data)
{
GtkWidget *treeview1;
treeview1=lookup_widget(objet_graphique,"treeview_excursion_client");
afficher_ex(treeview1);
}

void on_supprimer_rex_clicked      (GtkWidget *objet_graphique,gpointer user_data)
{
int id;
GtkWidget *ide;

	
 ide=lookup_widget(objet_graphique, "idsm2");
id=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(ide));
supprimerservation_ex(id);


}




             
