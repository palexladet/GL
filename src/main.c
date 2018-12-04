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
	char pr_nom[4];
	signed int a=19;

	scanf("%s", nom );
	scanf("%s", pr_nom );
	scanf("%d", a);


	printf("je m'appelle %s %s et j'ai %d ans",pr_nom,nom,a);
	
	MessagePopup(pr_nom,nom,a,"je m'appelle %s %s et j'ai %d ans");
	return 0;
} 	
	
