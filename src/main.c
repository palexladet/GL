#include <ansi_c.h>
#include <math.h>

int main(void)
{
	unsigned int a, b, c;
	int R;
	
	printf("a: ");
	scanf("%u",&a);
	
	printf("b: "); 
	scanf("%u",&b); 
	
	printf("c: "); 
	scanf("%u",&c);
	
	if(a<=9&&b<=9&&c<=6)
	{
		R=(a*10+b)*pow(10,c);
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
	
	

	
