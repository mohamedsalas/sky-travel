#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include <string.h>
#include "lv.h"
#include <gtk/gtk.h>
enum
{
	TYPE,
	NCH,
	PRIX,
	ID,
	COLUMNS
};

void afficher_lvp(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;
	char type[50];
	char nch[50];
	char prix[50];
	char date_r[50];
	char date_a[50];
	char promo[50];
	int id;
	store=NULL;

	FILE*f;

	store=gtk_tree_view_get_model(liste);
	if(store==NULL)
	{
		renderer=gtk_cell_renderer_text_new();
		column=gtk_tree_view_column_new_with_attributes(" type", renderer, "text",TYPE, NULL);
		gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	}
	renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" nch", renderer, "text",NCH, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" prix", renderer, "text",PRIX, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" id", renderer, "text", ID, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_INT);

	f=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(f,"%s %s %s %s %s %s %d\n",type,nch,prix,date_r,date_a,promo,&id)!=EOF)
		{
			if(strcmp(promo,"1")==0)
			{
				gtk_list_store_append(store, &iter);
				gtk_list_store_set(store, &iter, TYPE, type, NCH, nch, PRIX, prix, ID, id, -1);
			}
		}                                           
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
	g_object_unref(store);	
}
