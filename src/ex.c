#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include <string.h>
#include "agents.h"
#include <gtk/gtk.h>
enum
{
	NOM,
	LOGIN,
	PASSWORD,
	EMAIL,
	CIN,
	NUM,
	COLUMNS
};

void afficher_agents(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;
	char nom[50];
	char login[50];
	char password[50];
	char email[50];
	char cin[50];
	char num[50];
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
	column = gtk_tree_view_column_new_with_attributes(" login", renderer, "text",LOGIN, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" password", renderer, "text",PASSWORD, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" email", renderer, "text", EMAIL, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" cin", renderer, "text",CIN, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	
	renderer = gtk_cell_renderer_text_new();
        column = gtk_tree_view_column_new_with_attributes(" num", renderer, "text",NUM, NULL);
        gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);

	store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

	f=fopen("/home/welfi/Desktop/sky-travel/src/agents.txt","r");

	if(f==NULL)
	{
		return;
	}
	else
	{
		while(fscanf(f,"%s %s %s %s %s %s %d\n",nom,login,password,email,cin,num,&id)!=EOF)
		{
			gtk_list_store_append(store, &iter);
			gtk_list_store_set(store, &iter, NOM, nom, LOGIN, login, PASSWORD, password, EMAIL, email, CIN, cin, NUM, num, -1);
		}                                           
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
	g_object_unref(store);	
}
