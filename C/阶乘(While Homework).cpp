/*#include <stdio.h>
int main()
{
	int i=0;unsigned long long ret=1;int n;
	
	printf("Please input a number.I will count its factorial.\n"); 
	scanf("%d",&n);
	
	do {
		++i;
		//ע���ʱi��ֵ�Ѿ�+1�ˣ���������Ĳ�����д++i�� 
		ret*=i;
	}while(i<n);
	
	printf("%lld",ret);
	return 7;
} */ 
#include <stdio.h>
int main()
{
int i;unsigned long long ret=1;int n;
	
	printf("Please input a number.I will count its factorial.\n"); 
	scanf("%d",&n);
	
for(i=1;i<=n;i++){
	ret*=i;
}
	
	printf("%lld",ret);
	return 7;
} 
