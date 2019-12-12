#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include <string.h>
#include "vol.h"
#include <gtk/gtk.h>
enum
{
	COMPANIE,
	DESTINATION,
	DATE,
	DEPART,
	PRIX,
	ID,
	COLUMNS
};

void afficher_vol(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;
	char companie[50];
	char destination[50];
	char date[50];
	char depart[50];
	char prix[50];
	char pro[50];
	int id;
	store=NULL;

	FILE*f;

	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes(" companie", renderer, "text",COMPANIE, NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	}
	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" destination", renderer, "text",DESTINATION, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" date", renderer, "text",DATE, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" depart", renderer, "text",DEPART, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" prix", renderer, "text",PRIX, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" id", renderer, "text", ID, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_INT);

	f=fopen("/home/welfi/Desktop/sky-travel/src/vol.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(f,"%s %s %s %s %s %s %d\n",companie,destination,date,depart,prix,pro,&id)!=EOF)
		{
			gtk_list_store_append(store, &iter);
			gtk_list_store_set(store, &iter, COMPANIE, companie, DESTINATION, destination, DATE, date, DEPART, depart, PRIX, prix, ID, id, -1);
		}                                           
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
	g_object_unref(store);	
}
