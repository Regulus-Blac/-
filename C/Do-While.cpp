#include <stdio.h>
int main()
{
		short int n=0;
	unsigned long long x;
	scanf("%lld",&x);
	
	do{
		n++;
		x/=10;
	}
	while(x>0);

    printf("%d\n",n);
	

	return 1; 
}
