 #include <stdio.h>
int main()
{
	printf("������һ�������ҽ�����������д\n"); 
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
	printf("������һ���������ҽ����������һλ���\n"); 
	int a;
	scanf("%d",&a);
    while(a>=10){
    	a/=10;
	}
	printf("%d",a);
	
	return 0;
}               */
