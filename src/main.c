//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include <stdlib.h>

int s=0, n=1, m;

void main(void)
{
    while (n<12)
    {
        m=rand()% 10+1;
        s=s+m;
        n=n+1;
		
    }
}


