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
	unsigned char nb_pts[2];
	unsigned char x[5];
	unsigned char y[5];
	
	printf("quel est le nom de la figure: ");
	scanf("%s",nom_fig);
	
	printf("combient y a t-il de sommets sur la figure: ");
	scanf("%2c",nb_pts);
	
	printf("quelles sont les coordonnees en x: ");
	scanf("%5c",x);
	printf("quelles sont les coordonnees en y: ");
	scanf("%5c",y);
	
	MessagePopup("la figure est un",nom_fig);
	MessagePopup("il y a .__. points",nb_pts); 
	MessagePopup("les coordonees en x sont",x); 
	MessagePopup("les coordonees en y sont",y); 
	
	
	return 0;
} 	


	
