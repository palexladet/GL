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
//------------------------petit_2-----------------------------//
	int cgagnant[6]={0,0,0,0,0,0},cjoueur[6]={0,0,0,0,0,0},i,j,m=0;
	for(i=0;i<6;i++)
	{ 
		cgagnant[i]=rand()% 49+1;
		cjoueur[i]=rand()% 49+1;

		if(cgagnant[i]==cjoueur[i])
		{
			m=m+1;
		}
		else
		{
			m=m;
		}
	}
//-----------------------petit_4-------------------------------//
	initialiserTirage();
	for(i=0;i<100;i++)
	{
		for(j=0;j<6;j++)
		{
			cgagnant[j]=tirerNumero();
			if(cgagnant[j]==cjoueur[j])
			{
				m=m+1;
			}
			else
			{
				m=m;
			}
		}
	}
	return 0;
} 	