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
	char nom[6],pr_nom[16];
	signed int a=19;

	scanf("%s",nom);
	scanf("%s",pr_nom);
	scanf("%d",a);


	printf("je m'appelle %s %s et j'ai %d ans",pr_nom,nom,a);
	
	MessagePopup("Je m'appelle", pr_nom, nom, "j'ai", a, "ans");
	return 0;
} 	
