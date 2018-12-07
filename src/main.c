//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <ansi_c.h>
#include "my_header.h"
#include <TP_lib_suite.h>
#include <TP_lib.h>

//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <userint.h>
#include "c:\Program Files (x86)\National Instruments\CVI2017\include\ansi\stdio.h"
char x[5];
char y[5];

int main(void)
{
	
	char nom_fig[80];
	char nb_pts[2];
	
	
	
	char ligne1[80] = "Nom: pentagone_B" ;
	char ligne2[80] = "Nb points: 5" ;
	char ligne3[80] = "Coordonnees: 10 20 30 20 30 40 43 53 35 65";
	
	sscanf(ligne1,"%*s %s",nom_fig);
	sscanf(ligne2, "%*s %2c",nb_pts);
	sscanf("%*s %c %c %c %c %c %c %c %c %c %c ",x[0] ,y[0] ,x[1] ,y[1] ,x[2] ,y[2] ,x[3] ,y[3] ,x[4] ,y[4]);
	
	MessagePopup("la figure est un",nom_fig);
	MessagePopup("il y a .__. points",nb_pts[0]); 
	MessagePopup("les coordonees en x sont"," x[0] x[1] x[2] x[3] x[4]"); 
	MessagePopup("les coordonees en y sont"," y[0] y[1] y[2] y[3] y[4]"); 
	
	
	return 0;
} 	



	
