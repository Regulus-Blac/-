#include <stdio.h>
int main()
{
	int x,y;
    scanf("%d %d",&x,&y);
    
    int d=x;
    
    for(d=x;d>1;d--)   //d=2ʱ�����һ�ν�ѭ�������ǻ�--�����Ըպÿ������1����ȷ��� 
    {
    	if(x%d==0)
    	{
			if(y%d==0)
				goto out;	
		}
	}
  
    out:printf("%d",d);
	return 8;
}
