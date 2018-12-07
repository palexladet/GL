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

//char x[5];
//char y[5];

int main(void)
{
	
	char nom_fig[80];
	unsigned char nb_pts, x1 ,y1 ,x2 ,y2 ,x3 ,y3 ,x4 ,y4 ,x5 ,y5;
	static char phrase[80];
	
	
	
	char ligne1[80] = "Nom: pentagone_B" ;
	char ligne2[80] = "Nb points: 5" ;
	char ligne3[80] = "Coordonnees: 10 20 30 20 30 40 43 53 35 65";
	
	sscanf(ligne1,"%*s %s",nom_fig);
	sscanf(ligne2, "%*s %*s %1u",nb_pts);
	sscanf(ligne3,"%*s %1u %1u %1u %1u %1u %1u %1u %1u %1u %1u ",&x1 ,&y1 ,&x2 ,&y2 ,&x3 ,&y3 ,&x4 ,&y4 ,&x5 ,&y5);
	
	sprintf(phrase,"la figure %s possede %u sommets de coordonnees x1 %u y1 %u x2 %u y2 %u x3 %u y3 %u x4 %u y4 %u x5 %u y5 %u",nom_fig, nb_pts, x1 ,y1 ,x2 ,y2 ,x3 ,y3 ,x4 ,y4 ,x5 ,y5);
	
	MessagePopup("txt",phrase);
	//MessagePopup("il y a .__. points",nb_pts); 
	//MessagePopup("les coordonees en x sont",x1 x2 x3 x4 x5); 
	//MessagePopup("les coordonees en y sont",y1 y2 y3 y4 y5); 
	
	
	return 0;
}  	




	
