#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include <string.h>
#include "agents.h"
#include <gtk/gtk.h>
enum
{
	DESTINATION,
	DATEA,
	DATER,
	HOTEL,
	TRANS,
	PRIX,
	DISPO,
	ID,
	COLUMNS
};

void afficher_vo(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;
	char destination[50];
	char date_a[50];
	char promotion[50];
	char date_r[50];
	char hotel[50];
	char trans[50];
	char prix[50];
	char dispo[50];
	int id=0;
	store=NULL;

	FILE*f;

	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes(" destination", renderer, "text",DESTINATION, NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	}
	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" date allée", renderer, "text",DATEA, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" date retour", renderer, "text",DATER, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" hotel", renderer, "text", HOTEL, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" transport", renderer, "text",TRANS, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" prix", renderer, "text",PRIX, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" Dispo", renderer, "text",DISPO, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" id", renderer, "text",ID, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_INT);

	f=fopen("/home/welfi/Desktop/sky-travel/src/voyage.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(f,"%s %s %s %s %s %s %s %s %d\n",destination,date_a,promotion,date_r,hotel,trans,prix,dispo,&id)!=EOF)
		{
			gtk_list_store_append(store, &iter);
			gtk_list_store_set(store, &iter, DESTINATION, destination, DATEA, date_a, DATER, date_r, HOTEL, hotel, TRANS, trans, PRIX, prix, DISPO, dispo, ID, id, -1);
		}                                           
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
	g_object_unref(store);	
}
