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
void supprimerlv(char type[],char nch[])
{	lv lv;
	FILE*f;
	FILE*ftemp;
	f=fopen("/home/welfi/Desktop/sky-travel/src/lv.txt","r");    
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/lvtemp.txt","w");
	while(fscanf(f,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix)!=EOF)
    	{
        	if(strcmp(lv.type,type)!=0 && strcmp(lv.nch,nch)!=0)
        		{
            			fprintf(ftemp,"%s %s %s %s %s\n",lv.type,lv.nch,lv.date_a,lv.date_r,lv.prix);
        		}
        
        
    	}

    
    	fclose(f);
    	fclose(ftemp);
    	remove("/home/welfi/Desktop/sky-travel/src/lv.txt");
    	rename("/home/welfi/Desktop/sky-travel/src/lvtemp.txt","/home/welfi/Desktop/sky-travel/src/lv.txt");
    
}
void supprimervol(char dest[],char comp[])
{	vol v;
	FILE*f;
	FILE*ftemp;
	f=fopen("/home/welfi/Desktop/sky-travel/src/vol.txt","r");    
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/voltemp.txt","w");
	while(fscanf(f,"%s %s %s %s %s %s\n",v.dep,v.dest,v.comp,v.date,v.prix,v.pro)!=EOF)
    	{
        	if(strcmp(v.dest,dest)!=0 && strcmp(v.comp,comp)!=0)
        		{
            			fprintf(ftemp,"%s %s %s %s %s %s\n",v.dep,v.dest,v.comp,v.date,v.prix,v.pro);
        		}
        
        
    	}

    	fclose(f);
    	fclose(ftemp);
    	remove("/home/welfi/Desktop/sky-travel/src/vol.txt");
    	rename("/home/welfi/Desktop/sky-travel/src/voltemp.txt","/home/welfi/Desktop/sky-travel/src/vol.txt");
    
}
void ajouter_hotel(hotel h)
{
	FILE*f;
	f=fopen("/home/welfi/Desktop/sky-travel/src/hotel.txt","a+");
	fprintf(f,"%s %s %s %d %d %d %d %d %d %d %d %d %d %d %d\n",h.nom,h.lieu,h.nbr_etoile,h.sing.disp,h.sing.prix_pd,h.sing.prix_pc,h.sing.prix_dp,h.doub.disp,h.doub.prix_pd,h.doub.prix_pc,h.doub.prix_dp,h.swe.disp,h.swe.prix_pd,h.swe.prix_pc,h.swe.prix_dp);
	fclose(f);
}
void supprimerhotel(char lieu[],char nom[])
{	hotel h;
	FILE*f;
	FILE*ftemp;
	f=fopen("/home/welfi/Desktop/sky-travel/src/hotel.txt","r");    
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/hoteltemp.txt","w");
	while(fscanf(f,"%s %s %s %d %d %d %d %d %d %d %d %d %d %d %d\n",h.nom,h.lieu,h.nbr_etoile,&h.sing.disp,&h.sing.prix_pd,&h.sing.prix_pc,&h.sing.prix_dp,&h.doub.disp,&h.doub.prix_pd,&h.doub.prix_pc,&h.doub.prix_dp,&h.swe.disp,&h.swe.prix_pd,&h.swe.prix_pc,&h.swe.prix_dp)!=EOF)
    	{
        	if(strcmp(h.lieu,lieu)!=0 && strcmp(h.nom,nom)!=0)
        		{
            			fprintf(ftemp,"%s %s %s %d %d %d %d %d %d %d %d %d %d %d %d\n",h.nom,h.lieu,h.nbr_etoile,h.sing.disp,h.sing.prix_pd,h.sing.prix_pc,h.sing.prix_dp,h.doub.disp,h.doub.prix_pd,h.doub.prix_pc,h.doub.prix_dp,h.swe.disp,h.swe.prix_pd,h.swe.prix_pc,h.swe.prix_dp);
        		}
        
        
    	}

    	fclose(f);
    	fclose(ftemp);
    	remove("/home/welfi/Desktop/sky-travel/src/hotel.txt");
    	rename("/home/welfi/Desktop/sky-travel/src/hoteltemp.txt","/home/welfi/Desktop/sky-travel/src/hotel.txt");
    
}
void ajoutervoyage(voyage v)
{	FILE*f;
	f=fopen("/home/welfi/Desktop/sky-travel/src/voyage.txt","a+");
	fprintf(f,"%s %s %s %s %s %d %d %s\n",v.dest,v.date_a,v.date_r,v.nom_hotel,v.type_trans,v.prix,v.disp,v.pro);
	fclose(f);
}

void supprimervoyage(char dest[],char date[])
{	voyage v;
	FILE*f;
	FILE*ftemp;
	f=fopen("/home/welfi/Desktop/sky-travel/src/voyage.txt","r");    
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/voyagetemp.txt","w");
	while(fscanf(f,"%s %s %s %s %s %d %d%s\n",v.dest,v.date_a,v.date_r,v.nom_hotel,v.type_trans,&v.prix,&v.disp,v.pro)!=EOF)
    	{
        	if(strcmp(v.dest,dest)!=0 && strcmp(v.date_a,date)!=0)
        		{
            			fprintf(ftemp,"%s %s %s %s %s %d %d %s\n",v.dest,v.date_a,v.date_r,v.nom_hotel,v.type_trans,v.prix,v.disp,v.pro);
        		}
        
        
    	}

    	fclose(f);
    	fclose(ftemp);
    	remove("/home/welfi/Desktop/sky-travel/src/voyage.txt");
    	rename("/home/welfi/Desktop/sky-travel/src/voyagetemp.txt","/home/welfi/Desktop/sky-travel/src/voyage.txt");
    
}	
void ajouter_client(nouveau n)
{
	FILE*f;
	f=fopen("/home/welfi/Desktop/sky-travel/src/clients.txt","a+");
	fprintf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
	fclose(f);
}
void supprimer_client(char login[],char password[])
{
	FILE*f;
	FILE*ftemp;
	nouveau n;
	f=fopen("/home/welfi/Desktop/sky-travel/src/clients.txt","r");
	ftemp=fopen("/home/welfi/Desktop/sky-travel/src/per.txt","w");
	while(fscanf(f,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,&n.id)!=EOF)
		{				
			if(strcmp(login,n.login)!=0 && strcmp(password,n.password)!=0)
				fprintf(ftemp,"%s %s %s %s %s %s %d\n",n.nom,n.login,n.password,n.email,n.cin,n.num,n.id);
		}
	fclose(f);
	fclose(ftemp);
	remove("/home/welfi/Desktop/sky-travel/src/clients.txt");
	rename("/home/welfi/Desktop/sky-travel/src/per.txt","/home/welfi/Desktop/sky-travel/src/clients.txt");
}
	






