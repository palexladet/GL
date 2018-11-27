//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
//------------------------petit_2-----------------------------//
	int cgagnant[6]={0,0,0,0,0,0},cjoueur[6]={0,0,0,0,0,0},i,n=0;
	for(i=0;i<6;i++)
	{ 
		cgagnant[i]=rand()% 49+1;
		cjoueur[i]=rand()% 49+1;

		if(cgagnat[i]==cjoueur[i])
		{
			n=n+1;
		}
		else
		{
			n=n;
		}
	}

	return 0;
} 	