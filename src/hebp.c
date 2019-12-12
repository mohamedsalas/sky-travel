#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include <string.h>
#include "heb.h"
#include <gtk/gtk.h>
enum
{
	NOM,
	ETOILE,
	LIEU,
	ID,
	COLUMNS
};

void afficher_hebp(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;
	char nom[50];
	char etoile[50];
	char lieu[50];
	char sing1[50];
	char doub1[50];
	char swe1[50];
	char nom1[50];
	char etoile1[50];
	char lieu1[50];
	char sing2[50];
	char doub2[50];
	char swe2[50];
	char nom2[50];
	char etoile2[50];
	char lieu2[50];
	char promo[50];
	int id=0;
	store=NULL;

	FILE*f;

	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes(" nom", renderer, "text",NOM, NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	}
	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" etoile", renderer, "text",ETOILE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" lieu", renderer, "text",LIEU, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" id", renderer, "text",ID, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_INT);

	f=fopen("/home/welfi/Desktop/sky-travel/src/hotel.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %d\n",nom,etoile,lieu,sing1,doub1,swe1,nom1,etoile1,lieu1,sing2,doub2,swe2,nom2,etoile2,lieu2,promo,&id)!=EOF)
		{
			if(strcmp(promo,"1")==0)
			{
				gtk_list_store_append(store, &iter);
				gtk_list_store_set(store, &iter, NOM, nom, ETOILE, etoile, LIEU, lieu, ID, id, -1);
			}
		}                                           
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
	g_object_unref(store);	
}
