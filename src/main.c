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
	char ligne1 [80] = "Nom: pentagone_B" ;
	char ligne2 [80] = "Nb points: 5" ;
	char ligne3 [80] = "coordonnées: 10 20 30 20 30 40 43 53 35 65" ;
	scanf("%s",ligne1);
	scanf("%s",ligne2);
	scanf("%s",ligne3);
	

	scanf( "%[^\n]", ligne1 );
	scanf( "%[^\n]", ligne2 );
	scanf( "%[^\n]", ligne3 );
	return 0;
} 	
