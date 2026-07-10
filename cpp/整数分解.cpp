#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    
    int mask=1;
    int t=x;
 
 //判断位数 
    while(t>9){
    	t/=10;
    	mask*=10;
	}
//printf("mask=%d",mask);

	do{
		int d=x/mask;
		printf("%d",d);
	    if (mask>9){
		 printf(" ");
	    }
	 x%=mask;
	 mask/=10;
    }while (mask>0);
printf("\n");
	
	return 0;
}
/*
例：13425÷10000=1，输出 
13425%10000=3425
10000÷10=1000
3425÷1000=3，输出 
3425%1000=425
1000÷10=100
425÷100=4，输出 
425%100=25
100÷10=10
25÷10=2，输出 
25%10=5
10÷10=1
5÷1=5，输出 
5%1=0 
*/
