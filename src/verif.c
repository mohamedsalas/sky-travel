#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
