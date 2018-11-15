//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"

int s=0, n=1, t, c;

int main(void)
{
    while (n<20)
    {
        t=3*n;
        c=7*n;
        if((t%3) == 0 )
        {
            if((c%7) == 0 )
            {
                s=s+t+c;
            }
            else{
                s=s+t;
            }
        }
        else{
            if((c%7) == 0 )
            {
                s=s+c;   
            }
            else{
                s=s;
            }
        }
        n=n+1;       
    }
    printf("sommes s4 des %d premiers termes: %d",n ,s);
    getchar();
    getchar();

    return 0;
}