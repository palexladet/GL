//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"

int s=0, n=1;

int main(void)
{
    while (n<20)
    {
        s=s+n*3+n*7;
        n=n+1;
    }
    printf("sommes s4 des %d premiers termes: %d",n ,s);
    getchar();
    getchar();

    return 0;
}



