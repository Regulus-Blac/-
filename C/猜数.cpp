#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	srand(time(0));
	int a=rand()%100+1;int n=0;int b;
	//����ȷ�������7�ξͿ��Բ³��������ַ�����2^7>100 
	printf("�������������Ϸ�ɣ�����һ��1~100������������\n��ֻ��ش��㡰���ˡ����ߡ�С�ˡ�������һ������һ�����˶��ٴ�Ŷ\n�����뿪ʼ�°ɣ�\n");
	scanf("%d",&b);
	n++;
	
	while(b!=a)
	{n++;
		if(b>a){
		printf("����\n"); 
	}else if(b<a){
		printf("С��\n");	} 
		scanf("%d",&b);
	 } 
printf("��ϲ��¶��ˣ�һ��������%d�Σ��ٽ�������:)",n);
	
	return 0;
}
