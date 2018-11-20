//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

#include <ansi_c.h>
#include "my_header.h"
int i,seuil=127;
int main(void)
{
	unsigned char bin[10];
	for (i=0;i<10;i=i+1)
	{
		if(bin[i]>seuil)
		{
			bin[i]=1;
		}
		else
		{
			bin[i]=0;
		}
	}

//petit 2
//
	char sat[10];
	char seuilb=-65, seuilh=64;
	for (i=0;i<10;i=i+1)
	{
		sat[i]=rand()% -128+127;
		if(sat[i]<seuilb)
		{
			sat[i]=seuilb;
		}
		else if(sat[i]>seuilh)
		{
			sat[i]=seuilh;
		}
		else
		{
			sat[i]=sat[i];
		}
	}
	
//petit 3
//

	char dist[10]={65,84,121,54,25,47,98,62,02,74};
	int i;
	
	for(i=1;i<10;i=i+1)
	{
		dist[i]=dist[i]-dist[i-1];
	}
	
//petit 4
//
	int a[5]={58,250,147,123,75},b[5];
	
	for(i=0;i<5;i=1+i)
	{
		b[i]=a[1-i];
	}
	int miroir[16];
	for(i=0;i<8;i=i+1)
	{
		miroir[7+i]=miroir[7-i];
	}
	return 0;
}
	
