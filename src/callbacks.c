#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <gtk/gtkclist.h>
#include <gdk/gdkkeysyms.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "verif.h"
#include "agents.h"

void on_buttonLogin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
	FILE*f;
	FILE*ftemp;
	FILE*f1;
	GtkWidget *input1,*input2,*window10,*window20,*window30,*window40,*window50,*window60,*label=NULL;
	GtkWidget *output1,*output2,*output3,*output4,*output5;
	char nom[50],login[50],password[50],email[50],cin[50],num[50],mes[100];
	int verf=0;
	nouveau n,p;
	f=fopen("/home/welfi/Desktop/sky-travel/src/personne.txt","r");
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
	window10=lookup_widget(objet_graphique,"interface1");
	window20=lookup_widget(objet_graphique,"interface2");
	window30=lookup_widget(objet_graphique,"interface3");
	window40=lookup_widget(objet_graphique,"interface4");
	window50=lookup_widget(objet_graphique,"interface5");
	window60=lookup_widget(objet_graphique,"interface6");
	input1=lookup_widget(objet_graphique,"entryLogin");
	input2=lookup_widget(objet_graphique,"entryMdp");
	strcpy(login,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(input2)));
	verf=verif(login,password);
	if(verf==1)
	{
		window30=create_interface3();
		gtk_widget_show(window30);
		while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{
			if(strcmp(login,n.login)==0 && strcmp(password,n.password)==0)
			{
				strcpy(nom,n.nom);
				strcpy(login,n.login);
				strcpy(email,n.email);
				strcpy(cin,n.cin);
				strcpy(num,n.num);
				fprintf(ftemp,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
			}
		}
		output1=lookup_widget(window30,"label18");
		output2=lookup_widget(window30,"label19");
		output3=lookup_widget(window30,"label20");
		output4=lookup_widget(window30,"label21");
		output5=lookup_widget(window30,"label22");
		gtk_label_set_text(GTK_LABEL(output1),nom);
		gtk_label_set_text(GTK_LABEL(output2),login);
		gtk_label_set_text(GTK_LABEL(output3),email);
		gtk_label_set_text(GTK_LABEL(output4),cin);
		gtk_label_set_text(GTK_LABEL(output5),num);
		gtk_widget_show(window30);
		gtk_widget_destroy(window10);
		
	}
	else if(verf==2)
	{
		window60=create_interface6();
		gtk_widget_show(window60);
		while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{
			if(strcmp(login,n.login)==0 && strcmp(password,n.password)==0)
			{
				strcpy(nom,n.nom);
				strcpy(login,n.login);
				strcpy(email,n.email);
				strcpy(cin,n.cin);
				strcpy(num,n.num);
				fprintf(ftemp,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
			}
			if(n.id==1)
			{
				f1=fopen("/home/welfi/Desktop/sky-travel/src/clients.txt","a+");
				fprintf(f1,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
				fclose(f1);
			}	
		}
		output1=lookup_widget(window60,"label62");
		output2=lookup_widget(window60,"label61");
		output3=lookup_widget(window60,"label57");
		output4=lookup_widget(window60,"label58");
		output5=lookup_widget(window60,"label59");
		gtk_label_set_text(GTK_LABEL(output1),nom);
		gtk_label_set_text(GTK_LABEL(output2),login);
		gtk_label_set_text(GTK_LABEL(output3),email);
		gtk_label_set_text(GTK_LABEL(output4),cin);
		gtk_label_set_text(GTK_LABEL(output5),num);
		gtk_widget_destroy(window10);
		gtk_widget_show(window60);
	}
	else if(verf==3)
	{
		window40=create_interface4();
		gtk_widget_show(window40);
		while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{
			if(strcmp(login,n.login)==0 && strcmp(password,n.password)==0)
			{
				strcpy(nom,n.nom);
				strcpy(login,n.login);
				strcpy(email,n.email);
				strcpy(cin,n.cin);
				strcpy(num,n.num);
				fprintf(ftemp,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
			}
			if(n.id==2)
			{
				f1=fopen("/home/welfi/Desktop/sky-travel/src/agents.txt","a+");
				fprintf(f1,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
				fclose(f1);
			}	
		}
		output1=lookup_widget(window40,"label666");
		output2=lookup_widget(window40,"label29");
		output3=lookup_widget(window40,"label30");
		output4=lookup_widget(window40,"label31");
		output5=lookup_widget(window40,"label32");
		gtk_label_set_text(GTK_LABEL(output1),nom);
		gtk_label_set_text(GTK_LABEL(output2),login);
		gtk_label_set_text(GTK_LABEL(output3),email);
		gtk_label_set_text(GTK_LABEL(output4),cin);
		gtk_label_set_text(GTK_LABEL(output5),num);
		gtk_widget_show(window40);
		gtk_widget_destroy(window10);
	}
	else if(verf==4)
	{
		window50=create_interface5();
		gtk_widget_show(window50);
		while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{
			if(strcmp(login,n.login)==0 && strcmp(password,n.password)==0)
			{
				strcpy(nom,n.nom);
				strcpy(login,n.login);
				strcpy(email,n.email);
				strcpy(cin,n.cin);
				strcpy(num,n.num);
				fprintf(ftemp,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
			}
		}
		output1=lookup_widget(window50,"label47");
		output2=lookup_widget(window50,"label46");
		output3=lookup_widget(window50,"label42");
		output4=lookup_widget(window50,"label43");
		output5=lookup_widget(window50,"label44");
		gtk_label_set_text(GTK_LABEL(output1),nom);
		gtk_label_set_text(GTK_LABEL(output2),login);
		gtk_label_set_text(GTK_LABEL(output3),email);
		gtk_label_set_text(GTK_LABEL(output4),cin);
		gtk_label_set_text(GTK_LABEL(output5),num);
		gtk_widget_show(window50);
		gtk_widget_destroy(window10);
	}	
	else
	{
		label=lookup_widget(objet_graphique,"label63");
		strcpy(mes,"Cet utilisateur n'existe pas");
		gtk_label_set_text(GTK_LABEL(label),mes);
	}
	fclose(f);
	fclose(ftemp);
}

void on_buttonCc2_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
	GtkWidget *window1,*window2,*input1,*input2,*input3,*input4,*input5,*input6;
	nouveau n;
	window1=lookup_widget(objet_graphique,"interface1");	
	window2=lookup_widget(objet_graphique,"interface2");
	input1=lookup_widget(window2,"entry1");
	input2=lookup_widget(window2,"entry2");
	input3=lookup_widget(window2,"entry3");
	input4=lookup_widget(window2,"entry4");
	input5=lookup_widget(window2,"entry5");
	input6=lookup_widget(window2,"entry6");
	strcpy(n.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(n.login,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(n.password,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(n.email,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(n.cin,gtk_entry_get_text(GTK_ENTRY(input5)));
	strcpy(n.num,gtk_entry_get_text(GTK_ENTRY(input6)));
	n.id=1;
	ajouter(n);
	gtk_widget_destroy(window2);
	window1=create_interface1();
	gtk_widget_show(window1);
	
}


void on_buttonMc_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window3,*window8;
	window3=lookup_widget(button,"interface3");
	window8=lookup_widget(button,"interface8");
	gtk_widget_destroy(window3);
	window8=create_interface8();
	gtk_widget_show(window8);
}


void on_buttonDes_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
	GtkWidget *window1,*window3,*window7;
	window3=lookup_widget(objet_graphique,"interface3");
	window7=lookup_widget(objet_graphique,"interface7");
	window7=create_interface7();
	gtk_widget_show(window7);
	gtk_widget_hide(window3);
}
void on_buttonDec_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window1,*window3;
	window1=lookup_widget(button,"interface1");
	window3=lookup_widget(button,"interface3");
	gtk_widget_destroy(window3);
	window1=create_interface1();
	gtk_widget_show(window1);
}


void on_buttonMca_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window4,*window9;
	window4=lookup_widget(button,"interface4");
	window9=lookup_widget(button,"interface9");
	gtk_widget_destroy(window4);
	window9=create_interface9();
	gtk_widget_show(window9);	
}


void on_buttonDeca_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window1,*window4;
	window1=lookup_widget(button,"interface1");
	window4=lookup_widget(button,"interface4");
	gtk_widget_destroy(window4);
	window1=create_interface1();
	gtk_widget_show(window1);
	remove("/home/welfi/Desktop/sky-travel/src/agents.txt");
}


void
on_buttonMcp_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void on_buttonDecp_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window1,*window5;
	window1=lookup_widget(button,"interface1");
	window5=lookup_widget(button,"interface5");
	gtk_widget_destroy(window5);
	window1=create_interface1();
	gtk_widget_show(window1);
}


void on_buttonMcag_clicked(GtkWidget *button,gpointer user_data)
{

}


void on_buttonDecag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window1,*window6;
	window1=lookup_widget(button,"interface1");
	window6=lookup_widget(button,"interface6");
	gtk_widget_destroy(window6);
	window1=create_interface1();
	gtk_widget_show(window1);
	remove("/home/welfi/Desktop/sky-travel/src/clients.txt");
}


void
on_buttonagac_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonagmc_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonagsc_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void on_buttonnc_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
	GtkWidget *window1,*window2;
	window1=lookup_widget(objet_graphique,"interface1");
	window2=lookup_widget(objet_graphique,"interface2");
	window2=create_interface2();
	gtk_widget_show(window2);
	gtk_widget_destroy(window1);
}


void on_buttoncdes_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
	GtkWidget *window7,*window1,*window3,*output1,*input1,*input2,*input3,*input4,*input5,*input6,*input7;
	FILE*f;
	FILE*ftemp;
	int verf=0;
	char log[50],pass[50],mes[50];
	nouveau n;
	input6=lookup_widget(objet_graphique,"entry7");
	input7=lookup_widget(objet_graphique,"entry8");
	window1=lookup_widget(objet_graphique,"interface1");
	window7=lookup_widget(objet_graphique,"interface7");
	window3=lookup_widget(objet_graphique,"interface3");
	strcpy(log,gtk_entry_get_text(GTK_ENTRY(input6)));
	strcpy(pass,gtk_entry_get_text(GTK_ENTRY(input7)));
	output1=lookup_widget(window7,"label669");
	verf=verif(log,pass);
	if(verf==1)	
	{	
		supprimer(log,pass);
		window1=create_interface1();
		gtk_widget_destroy(window7);
		gtk_widget_show(window1);
	}	
	else
	{
		strcpy(mes,"Cet utilisateur n'existe pas");
		gtk_label_set_text(GTK_LABEL(output1),mes);		
	}
}


void on_buttonrdes_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
	GtkWidget *window7,*window3,*output1,*output2,*output3,*output4,*output5;
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(f,"%s %s %s %s %s %s",n.nom,n.login,n.password,n.email,n.cin,n.num);
	window3=lookup_widget(objet_graphique,"interface3");
	window3=create_interface3();
	output1=lookup_widget(window3,"label18");
	output2=lookup_widget(window3,"label19");
	output3=lookup_widget(window3,"label20");
	output4=lookup_widget(window3,"label21");
	output5=lookup_widget(window3,"label22");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);		
	gtk_widget_show(window3);
	window7=lookup_widget(objet_graphique,"interface7");
	gtk_widget_destroy(window7);
	fclose(f);
}


void on_buttoncch_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window8,*window3,*combobox1,*input1,*output1,*output2,*output3,*output4,*output5;	
	char mes[50];
	nouveau n;
	FILE*f;
	window3=lookup_widget(button,"interface3");
	window8=lookup_widget(button,"interface8");
	combobox1=lookup_widget(window8,"combobox1");
	input1=lookup_widget(window8,"entry9");
	strcpy(mes,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));
	if(strcmp(mes,"nom")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		strcpy(n.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
		supprimer(n.login,n.password);
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"login")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		strcpy(n.login,gtk_entry_get_text(GTK_ENTRY(input1)));
		supprimer(n.login,n.password);
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"password")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		strcpy(n.password,gtk_entry_get_text(GTK_ENTRY(input1)));
		supprimer(n.login,n.password);
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"email")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		strcpy(n.email,gtk_entry_get_text(GTK_ENTRY(input1)));
		supprimer(n.login,n.password);
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"cin")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		strcpy(n.cin,gtk_entry_get_text(GTK_ENTRY(input1)));
		supprimer(n.login,n.password);
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		strcpy(n.num,gtk_entry_get_text(GTK_ENTRY(input1)));
		supprimer(n.login,n.password);
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	gtk_widget_destroy(window8);
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(f,"%s %s %s %s %s %s",n.nom,n.login,n.password,n.email,n.cin,n.num);
	window3=lookup_widget(button,"interface3");
	window3=create_interface3();
	output1=lookup_widget(window3,"label18");
	output2=lookup_widget(window3,"label19");
	output3=lookup_widget(window3,"label20");
	output4=lookup_widget(window3,"label21");
	output5=lookup_widget(window3,"label22");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);		
	gtk_widget_show(window3);	
}
void on_buttonrch_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window8,*window3,*output1,*output2,*output3,*output4,*output5;
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(f,"%s %s %s %s %s %s",n.nom,n.login,n.password,n.email,n.cin,n.num);
	window3=lookup_widget(button,"interface3");
	window3=create_interface3();
	output1=lookup_widget(window3,"label18");
	output2=lookup_widget(window3,"label19");
	output3=lookup_widget(window3,"label20");
	output4=lookup_widget(window3,"label21");
	output5=lookup_widget(window3,"label22");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);		
	gtk_widget_show(window3);
	window8=lookup_widget(button,"interface8");
	gtk_widget_destroy(window8);
	fclose(f);
}


void on_button2_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window9,*window4,*combobox2,*input1,*output1,*output2,*output3,*output4,*output5;	
	char mes[50];
	nouveau n;
	FILE*f;
	window4=lookup_widget(button,"interface4");
	window9=lookup_widget(button,"interface9");
	combobox2=lookup_widget(window9,"combobox2");
	input1=lookup_widget(window9,"entry10");
	strcpy(mes,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));
	if(strcmp(mes,"nom")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		strcpy(n.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"login")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		strcpy(n.login,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"password")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		strcpy(n.password,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"email")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		strcpy(n.email,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else if(strcmp(mes,"cin")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		strcpy(n.cin,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	else
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		strcpy(n.num,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","w");
		fprintf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		fclose(f);
	}
	gtk_widget_destroy(window9);
	window4=lookup_widget(button,"interface4");
	window4=create_interface4();
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);		
	gtk_widget_show(window4);
}


void on_button1_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window9,*window4,*output1,*output2,*output3,*output4,*output5;
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(f,"%s %s %s %s %s %s",n.nom,n.login,n.password,n.email,n.cin,n.num);
	window4=lookup_widget(button,"interface4");
	window4=create_interface4();
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);		
	gtk_widget_show(window4);
	window9=lookup_widget(button,"interface9");
	gtk_widget_destroy(window9);
	fclose(f);
}


void on_buttonaag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window4,*treeview3;
	window4=lookup_widget(button,"interface4");
	treeview3=lookup_widget(button,"treeview3");
	afficher_agents(treeview3);
}


void
on_buttonaffcat_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void on_buttonajcat_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window6,*combobox,*window14;
	window6=lookup_widget(button,"interface6");
	window14=lookup_widget(button,"interface14");
	combobox=lookup_widget(window6,"combobox3");
	if(strcmp("Location Voiture",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
	{
		gtk_widget_destroy(window6);
		window14=create_interface14();
		gtk_widget_show(window14);
	}
}


void on_buttonmcat_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window6,*combobox,*window16;
	window6=lookup_widget(button,"interface6");
	window16=lookup_widget(button,"interface16");
	combobox=lookup_widget(window6,"combobox3");
	if(strcmp("Location Voiture",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
	{
		gtk_widget_destroy(window6);
		window16=create_interface16();
		gtk_widget_show(window16);
	}
}


void on_buttonscat_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window6,*window15,*combobox;
	window6=lookup_widget(button,"interface6");
	window15=lookup_widget(button,"interface15");
	combobox=lookup_widget(window6,"combobox3");
	if(strcmp("Location Voiture",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)))==0)
	{
		gtk_widget_destroy(window6);
		window15=create_interface15();
		gtk_widget_show(window15);
	}
}


void on_buttonrechcat_clicked(GtkWidget *button,gpointer user_data)
{

}


void on_buttonaa_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window4,*window10;
	window4=lookup_widget(button,"interface4");
	window10=lookup_widget(button,"interface10");
	gtk_widget_destroy(window4);
	window10=create_interface10();
	gtk_widget_show(window10);
}


void on_buttonsa_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window4,*window11;
	window4=lookup_widget(button,"interface4");
	window11=lookup_widget(button,"interface11");
	gtk_widget_destroy(window4);
	window11=create_interface11();
	gtk_widget_show(window11);
}


void on_buttoncaag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window4,*window10,*input1,*input2,*input3,*input4,*input5,*input6,*output1,*output2,*output3,*output4,*output5;
	nouveau n;
	FILE*f;
	window4=lookup_widget(button,"interface4");	
	window10=lookup_widget(button,"interface10");
	input1=lookup_widget(window10,"entry12");
	input2=lookup_widget(window10,"entry13");
	input3=lookup_widget(window10,"entry14");
	input4=lookup_widget(window10,"entry15");
	input5=lookup_widget(window10,"entry16");
	input6=lookup_widget(window10,"entry17");
	strcpy(n.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(n.login,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(n.password,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(n.email,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(n.cin,gtk_entry_get_text(GTK_ENTRY(input5)));
	strcpy(n.num,gtk_entry_get_text(GTK_ENTRY(input6)));
	n.id=2;
	ajouter(n);
	ajouter_agent(n);
	gtk_widget_destroy(window10);
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	window4=create_interface4();
	fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window4);
	fclose(f);
}


void on_Buttonraag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window10,*window4,*output1,*output2,*output3,*output4,*output5;
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	window10=lookup_widget(button,"interface10");
	window4=lookup_widget(button,"interface4");
	gtk_widget_destroy(window10);	
	window4=create_interface4();
	fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window4);
	fclose(f);
}


void on_buttoncsag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window4,*window11,*output1,*output2,*output3,*output4,*output5,*input6,*input7;
	FILE*f;
	int verf=0;
	char log[50],pass[50],mes[50];
	nouveau n;
	input6=lookup_widget(button,"entry18");
	input7=lookup_widget(button,"entry19");
	window11=lookup_widget(button,"interface11");
	window4=lookup_widget(button,"interface4");
	strcpy(log,gtk_entry_get_text(GTK_ENTRY(input6)));
	strcpy(pass,gtk_entry_get_text(GTK_ENTRY(input7)));
	output1=lookup_widget(window11,"label691");
	verf=verif(log,pass);
	if(verf==2)	
	{	
		supprimer(log,pass);
		supprimer_agent(log,pass);
		window11=create_interface11();
		gtk_widget_destroy(window4);
		gtk_widget_show(window11);
		f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
		window11=lookup_widget(button,"interface11");	
		window4=lookup_widget(button,"interface4");
		gtk_widget_destroy(window11);	
		window4=create_interface4();
		fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		output1=lookup_widget(window4,"label666");
		output2=lookup_widget(window4,"label29");
		output3=lookup_widget(window4,"label30");
		output4=lookup_widget(window4,"label31");
		output5=lookup_widget(window4,"label32");
		gtk_label_set_text(GTK_LABEL(output1),n.nom);
		gtk_label_set_text(GTK_LABEL(output2),n.login);
		gtk_label_set_text(GTK_LABEL(output3),n.email);
		gtk_label_set_text(GTK_LABEL(output4),n.cin);
		gtk_label_set_text(GTK_LABEL(output5),n.num);
		gtk_widget_show(window4);
		fclose(f);
	}	
	else
	{
		strcpy(mes,"Cet utilisateur n'existe pas");
		gtk_label_set_text(GTK_LABEL(output1),mes);		
	}
}



void on_buttonrsag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window11,*window4,*output1,*output2,*output3,*output4,*output5;
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	window11=lookup_widget(button,"interface11");
	window4=lookup_widget(button,"interface4");
	gtk_widget_destroy(window11);	
	window4=create_interface4();
	fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window4);
	fclose(f);
}


void on_buttoncmag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window12,*window13,*output1,*input1,*input2,*input3,*input4,*input5,*input6,*input7;
	FILE*f;
	FILE*ftemp;
	int verf=0;
	char log[50],pass[50],mes[50];
	nouveau n;
	input6=lookup_widget(button,"entry20");
	input7=lookup_widget(button,"entry21");
	window12=lookup_widget(button,"interface12");
	window13=lookup_widget(button,"interface13");
	strcpy(log,gtk_entry_get_text(GTK_ENTRY(input6)));
	strcpy(pass,gtk_entry_get_text(GTK_ENTRY(input7)));
	output1=lookup_widget(window12,"label697");
	verf=verif(log,pass);
	if(verf==2)	
	{	
		f=fopen("/home/welfi/Desktop/sky-travel/src/agents.txt","r");
		ftemp=fopen("/home/welfi/Desktop/sky-travel/src/am.txt","w");
		while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{
			if(strcmp(log,n.login)==0 && strcmp(pass,n.password)==0)
			{
				fprintf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
			}
		}
		fclose(f);
		fclose(ftemp);
		window13=create_interface13();
		gtk_widget_destroy(window12);
		gtk_widget_show(window13);
	}	
	else
	{
		strcpy(mes,"Cet agent n'existe pas");
		gtk_label_set_text(GTK_LABEL(output1),mes);		
	}
}


void on_buttonrchag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window13,*window4,*output1,*output2,*output3,*output4,*output5;
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	window13=lookup_widget(button,"interface13");
	window4=lookup_widget(button,"interface4");
	gtk_widget_destroy(window13);	
	window4=create_interface4();
	fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window4);
	fclose(f);

}


void on_buttoncchag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window13,*window4,*combobox2,*input1,*output1,*output2,*output3,*output4,*output5;	
	char mes[50];
	nouveau n;
	FILE*f;
	window4=lookup_widget(button,"interface4");
	window13=lookup_widget(button,"interface13");
	combobox2=lookup_widget(window13,"combobox4");
	input1=lookup_widget(window13,"entry22");
	strcpy(mes,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));
	if(strcmp(mes,"nom")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/am.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		supprimer_agent(n.login,n.password);
		strcpy(n.nom,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		ajouter_agent(n);
		remove("/home/welfi/Desktop/sky-travel/src/am.txt");
	}
	else if(strcmp(mes,"login")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/am.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		supprimer_agent(n.login,n.password);
		strcpy(n.login,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		ajouter_agent(n);
		remove("/home/welfi/Desktop/sky-travel/src/am.txt");
	}
	else if(strcmp(mes,"password")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/am.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		supprimer_agent(n.login,n.password);
		strcpy(n.password,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		ajouter_agent(n);
		remove("/home/welfi/Desktop/sky-travel/src/am.txt");
	}
	else if(strcmp(mes,"email")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/am.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		supprimer_agent(n.login,n.password);
		strcpy(n.email,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		ajouter_agent(n);
		remove("/home/welfi/Desktop/sky-travel/src/am.txt");
	}
	else if(strcmp(mes,"cin")==0)
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/am.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		supprimer_agent(n.login,n.password);
		strcpy(n.cin,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		ajouter_agent(n);
		remove("/home/welfi/Desktop/sky-travel/src/am.txt");
	}
	else
	{
		f=fopen("/home/welfi/Desktop/sky-travel/src/am.txt","r");
		fscanf(f,"%s %s %s %s %s %s %d",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
		fclose(f);
		supprimer(n.login,n.password);
		supprimer_agent(n.login,n.password);
		strcpy(n.num,gtk_entry_get_text(GTK_ENTRY(input1)));
		ajouter(n);
		ajouter_agent(n);
		remove("/home/welfi/Desktop/sky-travel/src/am.txt");
	}
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(f,"%s %s %s %s %s %s",n.nom,n.login,n.password,n.email,n.cin,n.num);
	gtk_widget_destroy(window13);
	window4=lookup_widget(button,"interface4");
	window4=create_interface4();
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);		
	gtk_widget_show(window4);
}



void on_buttonrmag_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window12,*window4,*output1,*output2,*output3,*output4,*output5;
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	window12=lookup_widget(button,"interface12");
	window4=lookup_widget(button,"interface4");
	gtk_widget_destroy(window12);	
	window4=create_interface4();
	fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window4,"label666");
	output2=lookup_widget(window4,"label29");
	output3=lookup_widget(window4,"label30");
	output4=lookup_widget(window4,"label31");
	output5=lookup_widget(window4,"label32");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window4);
	fclose(f);
}


void on_buttonmaga_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window4,*window12;
	window4=lookup_widget(button,"interface4");
	window12=lookup_widget(button,"interface12");
	gtk_widget_destroy(window4);
	window12=create_interface12();
	gtk_widget_show(window12);
}


void on_buttoncalv_clicked(GtkWidget *button,gpointer user_data)
{
	lv lv;
	FILE*f;
	FILE*ftemp;
	nouveau n;
	GtkWidget *window14,*window6,*input1,*input2,*input3,*input4,*input5,*output1,*output2,*output3,*output4,*output5;
	window6=lookup_widget(button,"interface6");
	window14=lookup_widget(button,"interface14");
	input1=lookup_widget(window14,"entry23");
	input2=lookup_widget(window14,"entry24");
	input3=lookup_widget(window14,"entry25");
	input4=lookup_widget(window14,"entry26");
	input5=lookup_widget(window14,"entry27");
	strcpy(lv.type,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(lv.nch,gtk_entry_get_text(GTK_ENTRY(input2)));
	strcpy(lv.date_a,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(lv.date_r,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(lv.prix,gtk_entry_get_text(GTK_ENTRY(input5)));
	f=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","a+");
   	fprintf(f,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix);
	fclose(f);
	gtk_widget_destroy(window14);
	window6=create_interface6();
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window6,"label62");
	output2=lookup_widget(window6,"label61");
	output3=lookup_widget(window6,"label57");
	output4=lookup_widget(window6,"label58");
	output5=lookup_widget(window6,"label59");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window6);
	fclose(ftemp);
	
}



void on_buttonralv_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window6,*window14,*output1,*output2,*output3,*output4,*output5;
	FILE*ftemp;
	nouveau n;
	window6=lookup_widget(button,"interface6");
	window14=lookup_widget(button,"interface14");
	gtk_widget_destroy(window14);
	window6=create_interface6();
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window6,"label62");
	output2=lookup_widget(window6,"label61");
	output3=lookup_widget(window6,"label57");
	output4=lookup_widget(window6,"label58");
	output5=lookup_widget(window6,"label59");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window6);
	fclose(ftemp);
}


void on_buttoncmlv_clicked(GtkWidget *button,gpointer user_data)
{

}


void on_buttoncchlv_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window16,*window6,*combobox4,*input1,*input2,*input3,*output1,*output2,*output3,*output4,*output5,*output6;	
	char mes[50],erreur[50];
	nouveau n;
	char type[50],nch[50];
	FILE*f;
	FILE*ftemp;
	FILE*F;
	lv lv;
	window6=lookup_widget(button,"interface6");
	window16=lookup_widget(button,"interface16");
	combobox4=lookup_widget(window16,"combobox5");
	input1=lookup_widget(window16,"entry30");
	input2=lookup_widget(window16,"entry31");
	input3=lookup_widget(window16,"entry32");
	output6=lookup_widget(window16,"label713");
	strcpy(type,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(nch,gtk_entry_get_text(GTK_ENTRY(input2)));
	f=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","r");
	while(fscanf(f,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix)!=EOF)
	{
			if(strcmp(type,lv.type)==0 && strcmp(nch,lv.nch)==0)

			{
				strcpy(mes,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox4)));
				if(strcmp(mes,"Type")==0)
				{
					supprimerlv(type,nch);
					strcpy(lv.type,gtk_entry_get_text(GTK_ENTRY(input1)));
					F=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","a+");					
					fprintf(F,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix);
					fclose(F);				
				}
				else if(strcmp(mes,"Nb de CH")==0)
				{	
					supprimerlv(type,nch);
					strcpy(lv.nch,gtk_entry_get_text(GTK_ENTRY(input1)));
					F=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","a+");					
					fprintf(F,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix);
					fclose(F);	
				}
				else if(strcmp(mes,"Date début contrat")==0)
				{	
					supprimerlv(type,nch);
					strcpy(lv.date_a,gtk_entry_get_text(GTK_ENTRY(input1)));
					F=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","a+");					
					fprintf(F,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix);
					fclose(F);	
				}
				else if(strcmp(mes,"Date fin contrat")==0)
				{	
					supprimerlv(type,nch);
					strcpy(lv.date_r,gtk_entry_get_text(GTK_ENTRY(input1)));
					F=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","a+");					
					fprintf(F,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix);
					fclose(F);	
				}
				else 
				{	
					supprimerlv(type,nch);
					strcpy(lv.prix,gtk_entry_get_text(GTK_ENTRY(input1)));
					F=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","a+");					
					fprintf(F,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix);
					fclose(F);	
				}
	
			gtk_widget_destroy(window16);
			window6=create_interface6();
			gtk_widget_show(window6);
			ftemp=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
			fscanf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
			output1=lookup_widget(window6,"label62");
			output2=lookup_widget(window6,"label61");
			output3=lookup_widget(window6,"label57");
			output4=lookup_widget(window6,"label58");
			output5=lookup_widget(window6,"label59");
			gtk_label_set_text(GTK_LABEL(output1),n.nom);
			gtk_label_set_text(GTK_LABEL(output2),n.login);
			gtk_label_set_text(GTK_LABEL(output3),n.email);
			gtk_label_set_text(GTK_LABEL(output4),n.cin);
			gtk_label_set_text(GTK_LABEL(output5),n.num);
			gtk_widget_show(window6);
			fclose(ftemp);

			}
			else
			{
				strcpy(erreur,"Ce lv n'existe pas");
				gtk_label_set_text(GTK_LABEL(output6),erreur);
			}

			
		
     
	}
	fclose(f);
}


void on_buttonrmlv_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window6,*window16,*output1,*output2,*output3,*output4,*output5;
	FILE*ftemp;
	nouveau n;
	window6=lookup_widget(button,"interface6");
	window16=lookup_widget(button,"interface16");
	gtk_widget_destroy(window16);
	window6=create_interface6();
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window6,"label62");
	output2=lookup_widget(window6,"label61");
	output3=lookup_widget(window6,"label57");
	output4=lookup_widget(window6,"label58");
	output5=lookup_widget(window6,"label59");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window6);
	fclose(ftemp);
}


void on_buttoncslv_clicked(GtkWidget *button,gpointer user_data)
{
	lv lv;
	nouveau n;
	FILE*ftemp;
   	GtkWidget *window12,*window6,*input1,*input2,*output1,*output2,*output3,*output4,*output5;
	window6=lookup_widget(button,"interface6");
	window12=lookup_widget(button,"interface15");
	input1=lookup_widget(window12,"entry28");
	input2=lookup_widget(window12,"entry29");
	strcpy(lv.type,gtk_entry_get_text(GTK_ENTRY(input1)));
	strcpy(lv.nch,gtk_entry_get_text(GTK_ENTRY(input2)));
	supprimerlv(lv.type,lv.nch);
	gtk_widget_destroy(window12);
	window6=create_interface6();
	gtk_widget_show(window6);
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window6,"label62");
	output2=lookup_widget(window6,"label61");
	output3=lookup_widget(window6,"label57");
	output4=lookup_widget(window6,"label58");
	output5=lookup_widget(window6,"label59");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window6);
	fclose(ftemp);

}


void on_buttonrslv_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window6,*window12,*output1,*output2,*output3,*output4,*output5;
	FILE*ftemp;
	nouveau n;
	window6=lookup_widget(button,"interface6");
	window12=lookup_widget(button,"interface15");
	gtk_widget_destroy(window12);
	window6=create_interface6();
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/temp11.txt","r");
	fscanf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id);
	output1=lookup_widget(window6,"label62");
	output2=lookup_widget(window6,"label61");
	output3=lookup_widget(window6,"label57");
	output4=lookup_widget(window6,"label58");
	output5=lookup_widget(window6,"label59");
	gtk_label_set_text(GTK_LABEL(output1),n.nom);
	gtk_label_set_text(GTK_LABEL(output2),n.login);
	gtk_label_set_text(GTK_LABEL(output3),n.email);
	gtk_label_set_text(GTK_LABEL(output4),n.cin);
	gtk_label_set_text(GTK_LABEL(output5),n.num);
	gtk_widget_show(window6);
	fclose(ftemp);
}

