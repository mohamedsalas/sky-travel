#include"reservation.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
enum
{
	DESTINATIONS,
	DATE,
	PRIX,
        DISPO,
	IDS,
	COLUMNSS
};

enum
{
	NOM,
        PRENOM,
        DESTINATION,
	JOUR,
        MOIS,
        ANNEE,
	NOMBRE,
	OPTION,
        PRIX_TOTAL,
        ID,
        COLUMNS
};



void ajoutereservation_ex(reservation r)
{
char nom[20];
char pre[20];
char des[20];
char op[30];
int ja,ma,aa;
int idf=0;
int nbr;
float pr;

FILE*f;

f=fopen("/home/oussema/Projets/excursion/src/reservationex.txt","a+");
 while(!feof(f))
    {
        fscanf(f,"%s %s %s %d/%d/%d %d %s %f %d\n",nom,pre,des,&ja,&ma,&aa,&nbr,op,&pr,&idf);

    }
r.id=idf+1;

if(f!=NULL)
{
fprintf(f,"%s %s %s %d/%d/%d %d %s %.2f %d\n",r.nom,r.prenom,r.destination,r.date_reservation.jour,r.date_reservation.mois,r.date_reservation.annee,r.nbr,r.option,r.prix_total,r.id);
}
fclose(f);
}

void affichertoutesreservation_ex (GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;

        char nom[20];
        char prenom[20];
	char destination[30];
	int jour;
	int mois;
	int annee;
        int nbr;
	char option[100];
        int id;
        float prix_total;

	store=NULL;

	FILE*f;

	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes(" nom", renderer, "text",NOM, NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" prenom", renderer, "text",PRENOM, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
     column = gtk_tree_view_column_new_with_attributes(" destination", renderer, "text",DESTINATION,NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
 column = gtk_tree_view_column_new_with_attributes("jour", renderer, "text",JOUR, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
  column = gtk_tree_view_column_new_with_attributes("mois", renderer, "text",MOIS, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

renderer = gtk_cell_renderer_text_new();
 column = gtk_tree_view_column_new_with_attributes("annee", renderer, "text",ANNEE, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("nbr", renderer, "text",NOMBRE, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" option", renderer, "text",OPTION, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes(" prix_total", renderer, "text",PRIX_TOTAL, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);



renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes("id", renderer, "text",ID, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);


       


	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_INT, G_TYPE_INT, G_TYPE_INT, G_TYPE_INT, G_TYPE_STRING,G_TYPE_FLOAT, G_TYPE_INT);

	f=fopen("/home/oussema/Projets/excursion/src/reservationex.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	{
		f=fopen("/home/oussema/Projets/excursion/src/reservationex.txt","a+");
		while(fscanf(f,"%s %s %s %d/%d/%d %d %s %f %d\n",nom,prenom,destination,&jour,&mois,&annee,&nbr,option,&prix_total,&id)!=EOF)
		{
			gtk_list_store_append(store, &iter);
			gtk_list_store_set(store, &iter, NOM, nom, PRENOM,prenom,DESTINATION, destination,JOUR,jour, MOIS,mois, ANNEE,annee,NOMBRE, nbr,OPTION, option,PRIX_TOTAL, prix_total,ID,id, -1);
		}
                fclose(f);
		gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
		g_object_unref(store);	
	}
}
}

void supprimerservation_ex(int id)
{reservation r;
FILE*f;
FILE*Ftemp;
f=fopen("/home/oussema/Projets/excursion/src/reservationex.txt","r");
Ftemp=fopen("/home/oussema/Projets/excursion/src/user2.txt","w");
while(!feof(f))
    {
     fscanf(f,"%s %s %s %d/%d/%d %d %s %f %d\n",r.nom,r.prenom,r.destination,&r.date_reservation.jour,&r.date_reservation.mois,&r.date_reservation.annee,&r.nbr,r.option,&r.prix_total,&r.id);

       if(r.id!=id)
         {fprintf(Ftemp,"%s %s %s %d/%d/%d %d %s %.2f %d\n",r.nom,r.prenom,r.destination,r.date_reservation.jour,r.date_reservation.mois,r.date_reservation.annee,r.nbr,r.option,r.prix_total,r.id);

    }}
fclose(f);
fclose(Ftemp);
remove("/home/oussema/Projets/excursion/src/reservationex.txt");
rename("/home/oussema/Projets/excursion/src/user2.txt","/home/oussema/Projets/excursion/src/reservationex.txt");
}



int disponible_ex(int nb,char dest[20])
{
excurtion e;
int id=0;

FILE *f;
FILE *f1;
f=fopen("/home/oussema/Projets/excursion/src/excursion.txt","r");
f1=fopen("/home/oussema/Projets/excursion/src/user4.txt","w");

while(!feof(f))
    {
fscanf(f,"%s %s %f %d %d\n",e.destination,e.date,&e.prix_excurtion,&e.disp,&e.id);
if (strcmp(dest,e.destination)==0)
     {id=e.id;
e.disp=e.disp-nb;}
if (e.disp<0)
return 1;
else
{if(id==e.id)
fprintf(f1,"%s %s %.2f %d %d\n",e.destination,e.date,e.prix_excurtion,e.disp,e.id);
else
fprintf(f1,"%s %s %.2f %d %d\n",e.destination,e.date,e.prix_excurtion,e.disp,e.id);
}
}
fclose(f1);
fclose(f);
remove("/home/oussema/Projets/excursion/src/excursion.txt");
rename("/home/oussema/Projets/excursion/src/user4.txt","/home/oussema/Projets/excursion/src/excursion.txt");
}

float prix_total_excursion(int nb,char dest[20])
{
excurtion e;
float prix;
FILE *f;
f=fopen("/home/oussema/Projets/excursion/src/excursion.txt","r");
while(!feof(f))
    {
fscanf(f,"%s %s %f %d %d\n",e.destination,e.date,&e.prix_excurtion,&e.disp,&e.id);

if (strcmp(dest,e.destination)==0)

prix=e.prix_excurtion*nb;
}
fclose(f);
return(prix);
}

void rechercher_ex(char dest[20])
{
FILE*f;
FILE*f1;
excurtion e;


f=fopen("/home/oussema/Projets/excursion/src/excursion.txt","r");
f1=fopen("/home/oussema/Projets/excursion/src/user3.txt","a+");
while(!feof(f))
    {
     fscanf(f,"%s %s %f %d %d\n",e.destination,e.date,&e.prix_excurtion,&e.disp,&e.id);

       if (strcmp(dest,e.destination)==0)
         fprintf(f1,"%s %s %.2f %d %d\n",e.destination,e.date,e.prix_excurtion,e.disp,e.id);

    }
fclose(f);
fclose(f1);

}


void afficher_chercher_ex(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
excurtion e;

char destination[30];
char date [30];
float prix;
int id;
int disp;
store =NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("destination",renderer,"text",DESTINATIONS,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("date",renderer,"text",DATE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("prix",renderer,"text",PRIX,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("disp",renderer,"text",DISPO,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("id",renderer,"text",IDS,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
	
	renderer=gtk_cell_renderer_text_new();
}

	store=gtk_list_store_new(COLUMNSS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_FLOAT,G_TYPE_INT,G_TYPE_INT);

	f=fopen("/home/oussema/Projets/excursion/src/user3.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	
	{ 
	f=fopen("/home/oussema/Projets/excursion/src/user3.txt","a+");
		while(fscanf(f,"%s %s %f %d %d\n",destination,date,&prix,&disp,&id)!=EOF)
		{
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,DESTINATIONS,destination,DATE,date,PRIX,prix,DISPO,disp,IDS,id,-1);
		}
	   fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
	g_object_unref(store);
	}
}


void afficher_ex(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;


char destination[30];
char date [30];
float prix;
int disp; 
int id;
store =NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("destination",renderer,"text",DESTINATIONS,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW (liste),column);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("date",renderer,"text",DATE,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("prix",renderer,"text",PRIX,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
	
        renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("disp",renderer,"text",DISPO,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);


	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes("id",renderer,"text",IDS,NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);

}	
	


	store=gtk_list_store_new(COLUMNSS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_FLOAT,G_TYPE_INT,G_TYPE_INT);

	f=fopen("/home/oussema/Projets/excursion/src/excursion.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	
	{ 
	
		while(fscanf(f,"%s %s %f %d %d\n",destination,date,&prix,&disp,&id)!=EOF)
		{
			gtk_list_store_append(store,&iter);
			gtk_list_store_set(store,&iter,DESTINATIONS,destination,DATE,date,PRIX,prix,DISPO,disp,IDS,id,-1);
		}
	   fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
	g_object_unref(store);
	}
}




