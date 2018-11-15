//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"

int s=3, n=1;

int main(void)
{
    while( 3*(n+1) < 9876 )
    {
        s=s+3*(n+1);
        n=n+1;
    }
    printf("sommes si des %d premiers termes: %d",n ,s);

    getchar();
    getchar();
    return 0;
}


