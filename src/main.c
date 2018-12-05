//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <ansi_c.h>
#include "my_header.h"


int main(void)
{
	char nom[6],pr_nom[16];
	signed int a=19;

	scanf("%s",nom);
	scanf("%s",pr_nom);
	scanf("%d",a);


	sprintf("je m'appelle %1\$s , %2\$s et j'ai %3\$d ans",pr_nom ,nom ,a); 
	
	MessagePopup("Je m'appelle", pr_nom, nom, "j'ai", a, "ans");
	return 0;
} 	
