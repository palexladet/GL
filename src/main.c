//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <ansi_c.h>
#include < stdio.h > 
#include "my_header.h"


int main(void)
{
	char nom[100],pr_nom[100];
	int a=19;

	
	scanf("%s",pr_nom);
	scanf("%s",nom);

	printf("je m'appelle %s %s et j'ai %d ans",pr_nom,nom,a);
	MessagePopup("Je m'appelle",nom),("Je m'appelle",pr_nom);   //!?!?!?!?!?!?!?!?!?!?
	getchar();
	getchar();
	
	return 0;
} 	
