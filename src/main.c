//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <TP_lib.h>
#include <ansi_c.h>

short s=0, resultat=2;

void main(void)
{
	while(resultat>1)
	{
        resultat = LancerDe ();
        if ((resultat%2) == 0)
        {
            s=s+resultat;
        }
        else if (resultat==3)
        {
            s=s*2;  
        }
        else(resultat=5);
        {
            s=s-2;
            if(s>0)
            {
                s=s;
            }
            else
            {
                s=0;
            }
        }
		
	}
	printf("resultat lancers = %d",s);

	getchar();
	getchar();

}
