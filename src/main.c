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
	char nom[7];
	nom[0] = 'D' ;
	nom[1] = 'u' ;
	nom[2] = 'p' ;
	nom[3] = 'o' ;
	nom[4] = 'n' ;
	nom[5] = 't' ;
	nom[6] = '\0' ;
	sprintf(nom,"Dupont");

	char pr_nom[4];
	pr_nom[0] = 'L' ;
	pr_nom[1] = 'e' ;
	pr_nom[2] = 'a' ;
	pr_nom[3] = '\0' ;
	sprintf(pr_nom,"Lea");

	signed int a=19;

	printf("je m'appelle %s %s et j'ai %d ans",pr_nom,nom,a);
	return 0;
} 	
