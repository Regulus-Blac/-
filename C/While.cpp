#include<stdio.h>
int main()
{
	short int n=1;
	unsigned long long x;
	scanf("%lld",&x);
	
	x/=10;
	while(x>0)
    {++n;
    x/=10;
}
    printf("%d\n",n);
	
	return 9;
}

