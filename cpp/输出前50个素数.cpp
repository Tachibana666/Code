#include <stdio.h>

int main()
{
    int x=2;
    int i; 
    int isprime=1; 
    int cnt=1;
	//for(x=1;x<=100;x++)
	while(cnt<=50){
	isprime=1;
	for(i=2;i<x;i++){
		if (x % i==0){
			isprime=0;
			break;
		}
	}
	if(isprime==1){
		printf("%d\n",x);
		cnt++;
	}
	x++;
	}
	
	return 0;
}
