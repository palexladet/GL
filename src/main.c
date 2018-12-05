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
	char x;
	char ligne1 [80] = "Nom: pentagone_B" ;
	char ligne2 [80] = "Nb points: 5" ;
	char ligne3 [80] = "coordonnées: 10 20 30 20 30 40 43 53 35 65" ;
	char x[];
	char y[];
	sscanf(ligne1,"%u",nom_fig);
	sscanf(ligne1,"%u",nb_pts);
	sscanf(ligne3,"%u %*s %lu %*s",x,y);
	
	return 0;
} 	

#include "c:\Program Files (x86)\National Instruments\CVI2017\include\ansi\stdio.h"
