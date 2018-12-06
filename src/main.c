//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <ansi_c.h>
#include "my_header.h"
#include <TP_lib_suite.h>
#include <TP_lib.h>

int main(void)
{
	
	char nom_fig[80];
	int nb_pts;
	char x[5];
	char y[5];
	
	printf("quel est le nom de la figure: ");
	scanf("%s",nom_fig);
	
	printf("combient y a t-il de sommets sur la figure: ");
	scanf("%d",&nb_pts);
	
	printf("quelles sont les coordonnées en x: ");
	scanf("%s",x);
	printf("quelles sont les coordonnées en y: ");
	scanf("%s",y);
	
	MessagePopup("la figure est un",nom_fig);
	MessagePopup("il y a %d points",nb_pts); 
	MessagePopup("les coordonees en x sont",x); 
	MessagePopup("les coordonees en y sont",y); 
	
	
	return 0;
} 	


	
