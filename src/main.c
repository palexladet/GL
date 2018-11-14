//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include "stdlib.h"

int s=0, n=1, m;

int main(void)
{
    rand();
}
int rand(void)
{
    while (n<12)
    {
        RAND_MIN=1;
        RAND_MAX=10;
        m=rand();
        s=s+m;
        n=n+1;
    }
    return 0;
}



