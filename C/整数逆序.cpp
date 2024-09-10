 #include <stdio.h>
int main()
{
	printf("请输入一个整数我将把他逆序书写\n"); 
	int a,b;
	scanf("%d",&a);
	
	do{
		b=a%10;
		a/=10;
		printf("%d",b);
	}while(a>0);
	
	return 0;
}               




/*#include <stdio.h>
int main()
{
	printf("请输入一个正整数我将把他的最第一位输出\n"); 
	int a;
	scanf("%d",&a);
    while(a>=10){
    	a/=10;
	}
	printf("%d",a);
	
	return 0;
}               */
