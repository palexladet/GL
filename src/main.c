#include <biblio_resistance.h>
#include <ansi_c.h>
#include <cmath.h>

/*********************************************************************
int main(void)
{
	uint16_t R, a, b, c;
	
	printf("a: ");
	scanf("%u",&a);
	
	printf("b: "); 
	scanf("%u",&b); 
	
	printf("c: "); 
	scanf("%u",&c);
	
	if(a<=9&&b<=9&&c<=6)
	{
		R=(a*10+b)*(uint16_t)pow(10,c);
		printf("la valeure de la resistance est egale a %d ohms",R);
	}
	else
	{
		printf("osti de noob");
	}
	getchar();
	getchar();
	return 0;
}    
**************************************************************************/	

void main(void)
{
	/* définitin des variables locales : */
	long int anneau1, anneau2, anneau3, val_res;
	
	/* saisir : */
	anneau1 = saisir_anneau(0, 9, 1);
	anneau2 = saisir_anneau(0, 9, 2);
	anneau3 = saisir_anneau(0, 6, 3);
	
	/* traitement */
	val_res = calculer_val_resistance(anneau1, anneau2, anneau3 );
	
	/* restitution des résultas : */
	afficher_resistance (val_res );
}

	
