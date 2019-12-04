#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "verif.h"

void on_buttonLogin_clicked(GtkWidget *objet_graphique,gpointer user_data)
{
	FILE*f;
	FILE*ftemp;
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
	FILE*f;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/personne.txt","a+");
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
	fprintf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
	fclose(f);
	gtk_widget_destroy(window2);
	window1=create_interface1();
	gtk_widget_show(window1);
	
}


void
on_buttonMc_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

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


void
on_buttonMca_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void on_buttonDeca_clicked(GtkWidget *button,gpointer user_data)
{
	GtkWidget *window1,*window4;
	window1=lookup_widget(button,"interface1");
	window4=lookup_widget(button,"interface4");
	gtk_widget_destroy(window4);
	window1=create_interface1();
	gtk_widget_show(window1);
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


void
on_buttonMcag_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
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
	char login[50],mes[100],password[50],log[50],pass[50],nom[50],email[50],cin[50],num[50];
	int id;
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
	f=fopen("/home/welfi/Desktop/sky-travel/src/personne.txt","r");
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/per.txt","w");
	rewind(f);
	if(verf==1)	
	{	
		while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{				
			if(strcmp(login,n.login)!=0 && strcmp(pass,n.password)!=0)
				fprintf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		}
		window1=create_interface1();
		gtk_widget_destroy(window7);
		gtk_widget_show(window1);
	}	
	else
	{
		strcpy(mes,"Cet utilisateur n'existe pas");
		gtk_label_set_text(GTK_LABEL(output1),mes);		
	}
	fclose(f);
	fclose(ftemp);
	remove("/home/welfi/Desktop/sky-travel/src/personne.txt");
	rename("/home/welfi/Desktop/sky-travel/src/per.txt","/home/welfi/Desktop/sky-travel/src/personne.txt");
	
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

