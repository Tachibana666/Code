#include <stdio.h>

int main()
{
    int n;
    int i=1;
    int j=1;
    int cnt=1;
    scanf ("%d",&n);
    do{
    	if(j<=n){
    		printf("%d*%d=%d  ",i,j,i*j);
		}
    	if(i==cnt){
    		printf("\n");
    		j++; 
			cnt++; 		
		}
		i++;
	}while(i!=n||j!=n);
	
	return 0;
}
