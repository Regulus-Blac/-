#include <stdio.h>
int main()
//������ǵ�15��������scanf �� &���¿պ���40mins....... 
{
	printf("��ӭʹ��ʱ������������ε�ʱ����������ڵ����죬�����ٶ�Ļ�����ֱ�Ӽ������ɸ�24СʱŶ\n");
	int h1,h2,m1,m2,d,T,hour,minute; 

	printf("������һ��ʼ��ʱ���Ǽ�ʱ���֣�ʱ����ûس�������\n"); 
	scanf("%d %d",&h1,&m1);
    printf("�����������ʱ���Ǽ�ʱ���֣�ʱ����ûس�������\n"); 
	scanf("%d %d",&h2,&m2);
	
	T=h2*60+m2-(h1*60+m1);
		printf("���������ʱ���ڲ�ͬ������������2������ͬһ��������1\n") ;
	scanf("%d",&d);
switch(d){
	case 1:
		break;
	case 2:
	    T+=24*60;
	    break;
	default:
		printf("��Ǹ��������������:(");
		break;
}
	
	hour=T/60; 
	minute=T%60;
	printf("����ʱ�����%dСʱ%d����\n",hour,minute);
	
	printf("��л����ʹ�ã��ټ� :)\n");
	return 0;
}
