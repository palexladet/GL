//  Copyright (c) 2018 Antoine Tran Tan
//
//petit 1
//

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
				   
						  
    return 0;
}

//petit 2
//


#include "my_header.h"
int i;
int main(void)
{
	unsigned char sat[10];
	for (i=0;i<10;i=i+1)
	{
		sat[i]=rand()% 255+1;
	}
	
	
	
	
	return 0;
}
	
