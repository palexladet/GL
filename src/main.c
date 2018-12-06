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
	
	char ligne1[80] = "Nom: pentagone_B" ;
	char ligne2[80] = "Nb points: 5" ;
	char ligne3[80] = "coordonnees: 10 20 30 20 30 40 43 53 35 65" ;
	char x[5];
	char y[5];
	char nom_fig[10000];
	char nb_pts[10000],X,Y;
	sscanf(ligne1,"%s",nom_fig[10000]);
	sscanf(ligne2,"%d %*s",nb_pts[10000]);
	sscanf(ligne3,"[%i %*s %1i %*s]",x[5],&y[5]);
	MessagePopup("la figure est un",nom_fig);
	MessagePopup("il y a %d points",nb_pts); 
	sprintf("la figure est un %s à %d points de coordonnées respectives %s en x et %s en y",nom_fig,nb_pts,x,y);
	MessagePopup("les coordonees en x sont",x); 
	MessagePopup("les coordonees en y sont",y); 
	
	
	return 0;
} 	
	
	
