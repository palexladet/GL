//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"
#include "ansi_c.h"

short s=0, resultat=2;

void main(void)
{
	while(resultat>1)
	{
		resultat = LancerDe ();
		s=s+resultat;
	}
	print("résultat lancers = %d",s);

	getchar();
	getchar();

}
