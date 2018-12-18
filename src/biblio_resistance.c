#include <biblio_resistance.h> 
#include <stdio.h>
#include <stdint.h>

long saisir_anneau( long val_min, long val_max, long numero_anno)
{
	long int master;  
	int condition =0;
	
	printf("saisir valeur anneau %u: ",numero_anno);
	
	while(condition==0)
	{
		scanf("%u",&master);
		
		
		if(master >= val_min &&master<= val_max)
		{
			condition =1;
		}
		
		else
		{
			printf("nope");
		}
		
	}
	
	return master;
}

long calculer_val_resistance ( long val_anno1,long val_anno2, long val_anno3 )
{
	
