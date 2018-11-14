//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"

int s=3, n=1;

int main(void)
{
    while (s<9876)
    {
        s=s+3*(n+1);
        n=n+1;
    }
    printf("sommes si des %d premiers termes: %d",n ,s);

    return 0;
}


