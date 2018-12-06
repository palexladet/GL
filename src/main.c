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
	char nom_fig[100];
	char nb_pts[100];
	sscanf(ligne1,"%s",nom_fig);
	sscanf(ligne2,"%c %*s",nb_pts);
	sscanf(ligne3,"%c %*s %1c %*s",&x[5],&y[5]);
	
	return 0;
} 	
