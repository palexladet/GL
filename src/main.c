//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
//------------------------petit_2-----------------------------//
	int cgagnant[6]={0,0,0,0,0,0},cjoueur[6]={0,0,0,0,0,0},i,m=0;
	for(i=0;i<6;i++)
	{ 
		cgagnant[i]=rand()% 49+1;
		cjoueur[i]=rand()% 49+1;

		if(cgagnat[i]==cjoueur[i])
		{
			m=m+1;
		}
		else
		{
			m=m;
		}
	}
	void initialiserTirage(void);
	short tirerNumero(void);



	
	return 0;
} 	