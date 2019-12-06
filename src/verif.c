#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtkclist.h>
#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>
#include "verif.h"

int verif(char login[],char password[])
{	
	FILE*f;
	f=fopen("/home/welfi/Desktop/sky-travel/src/personne.txt","r");
	int i=0;int c=-1;nouveau n;
	FILE*Ftemp;
	Ftemp=fopen("/home/welfi/Desktop/sky-travel/src/datatemp.txt","w");
	if(f!=NULL)
	{
	while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
	{
		if(strcmp(n.login,login)==0 && strcmp(n.password,password)==0)
		{
			c=n.id;
			fprintf(Ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		}
	}
	}
	rewind(f);
	fclose(f);
	fclose(Ftemp);
	return(c);
}
void supprimer(char login[],char password[])
{
	FILE*f;
	FILE*ftemp;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/personne.txt","r");
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/per.txt","w");
	while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{				
			if(strcmp(login,n.login)!=0 && strcmp(password,n.password)!=0)
				fprintf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		}
	fclose(f);
	fclose(ftemp);
	remove("/home/welfi/Desktop/sky-travel/src/personne.txt");
	rename("/home/welfi/Desktop/sky-travel/src/per.txt","/home/welfi/Desktop/sky-travel/src/personne.txt");
}
void ajouter(nouveau n)
{
	FILE*f;
	f=fopen("/home/welfi/Desktop/sky-travel/src/personne.txt","a+");
	fprintf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
	fclose(f);
}
void ajouter_agent(nouveau n)
{
	FILE*f;
	f=fopen("/home/welfi/Desktop/sky-travel/src/agents.txt","a+");
	fprintf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
	fclose(f);
}
void supprimer_agent(char login[],char password[])
{
	FILE*f;
	FILE*ftemp;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/agents.txt","r");
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/per.txt","w");
	while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{				
			if(strcmp(login,n.login)!=0 && strcmp(password,n.password)!=0)
				fprintf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		}
	fclose(f);
	fclose(ftemp);
	remove("/home/welfi/Desktop/sky-travel/src/agents.txt");
	rename("/home/welfi/Desktop/sky-travel/src/per.txt","/home/welfi/Desktop/sky-travel/src/agents.txt");
}
