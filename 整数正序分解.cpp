#include <stdio.h>
int main()
{
	int x,t,ret;int d=1;

    scanf("%d",&x);
    t=x;
    while(t>9)
	{
    	t/=10;d*=10;
	}
   
  	while(d>0)
  	{
  		ret=x/d;
  		x%=d;
  		d/=10;
  		printf("%d",ret);
  		
  		if(d>0)
  			printf(" ");
	  }
    
    //�˴�����x��Ϊwhile �� if ���ж�����Ϊ������8000���ִ�0����ʱ��ֻ�������λ�� 
	
	//����nb!!! 
	
	return 9;
}
