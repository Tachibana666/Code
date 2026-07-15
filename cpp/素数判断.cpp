#include <stdio.h>

int main()
{
    int x;
    int i; 
    int isprime=1;
	scanf("%d",&x); 
	for(i=2;i<x;i++){
		if (x % i==0){
			isprime=0;
			break;
		}
	}
	printf("%d\n",isprime);
	if(isprime==1){
		printf("是素数\n");
	}else{
		printf("不是素数\n");
	}
	
	return 0;
}
