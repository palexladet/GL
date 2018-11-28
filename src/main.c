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
	int cgagnant[6]={0,0,0,0,0,0},cjoueur[6]={0,0,0,0,0,0},i,j,m=0,o[100],G;
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
	for(i=0;i<100;i++)
	{
		int cj[6]={29,49,37,19,42,4},j,k,n=0;
		for(j=0;j<6;j++)
		{
			initialiserTirage();
			cgagnant[j]=tirerNumero();
		}
		for(k=0;k<6;k++)
		{
				
			if(cj[k]==cgagnant[0] || cj[k]==cgagnant[1] || cj[k]==cgagnant[2] || cj[k]==cgagnant[3] || cj[k]==cgagnant[4] || cj[k]==cgagnant[5])
			{
				n=n+1;
			}
			else
			{
				n=n;
			}
			
		}
		o[i]=n;
		if(i>=1)
		{
			if(o[i]>o[i-1])
			{
				o[i]=n;
			}
			else
			{
				o[i]=o[i-1];
			}
		}
		else
		{
			o[i]=0;
		}
	}
	G=o[99];
	return 0;
}		
		

			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
if(cgagnant[j]==cj[j])
{
n=n+1;
}
else
{
n=n;
}
}
o[i]=n;
if(i>=1)
{
if(o[i]>o[i-1])
{
o[i]=n;
}
else
{
o[i]=o[i-1];
}
}
else
{
o[i]=0;
}
}
G=o[99];
return 0;
} 	
