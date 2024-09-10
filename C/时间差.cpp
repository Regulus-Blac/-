#include <stdio.h>
int main()
//这次又是第15行忘记了scanf 的 &导致空耗了40mins....... 
{
	printf("欢迎使用时间差计算机，两次的时间最多在相邻的两天，天数再多的话可以直接加上若干个24小时哦\n");
	int h1,h2,m1,m2,d,T,hour,minute; 

	printf("请输入一开始的时间是几时几分（时与分用回车隔开）\n"); 
	scanf("%d %d",&h1,&m1);
    printf("请输入后来的时间是几时几分（时与分用回车隔开）\n"); 
	scanf("%d %d",&h2,&m2);
	
	T=h2*60+m2-(h1*60+m1);
		printf("若您输入的时间在不同的两天请输入2，若在同一天请输入1\n") ;
	scanf("%d",&d);
switch(d){
	case 1:
		break;
	case 2:
	    T+=24*60;
	    break;
	default:
		printf("抱歉，您的输入有误:(");
		break;
}
	
	hour=T/60; 
	minute=T%60;
	printf("两次时间相差%d小时%d分钟\n",hour,minute);
	
	printf("感谢您的使用，再见 :)\n");
	return 0;
}
