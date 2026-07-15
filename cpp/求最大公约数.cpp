#include <stdio.h>

int main()
{
    int a;
    int b;
    int t;
    int min(int x,int y);
    int max(int x,int y);
    scanf("%d%d",&a,&b);
    int c,d;
    c=min(a,b);
    d=max(a,b);
    for(t=c;t>0;t--){
    	if(c%t==0){
    		if(d%t==0){
    			printf("两数最大公约数为%d",t);
				break;
			}
		}
	}
	
	return 0;
}

int min(int x,int y){
	int z;
	if(x>y)z=y;
	else z=x;
	return(z);
}

int max(int x,int y){
	int k;
	if(x>y)k=x;
	else k=y;
	return(k);
}
