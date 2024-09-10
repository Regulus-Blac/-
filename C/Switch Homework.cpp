/*这个代码试错了好久，错在了使用scanf时忘记了&，并且在case1时用的%d而非%f */  
#include <stdio.h>
int main()
{
	double x;
	int y;
	scanf("%lf",&x); 

	if (x>0){y=1;
	}else if(x==0){
	y=2;}
	 else {y=3;
	 }
	 
	switch(y){
		case 1:
			printf("%f",2*x);
			break;
		case 2:
			printf("0");
			break;
		default:
		    printf("-1");	
		    break;
	}
	
	return 0;
}

