#include <stdio.h>

int main()  //ÓÃÇ¶Ì×ifÓï¾äÍê³É 
{
	int score;
	scanf("%d",&score);
	if(score>=0&&score<=100){
		if(score>=60){
			if(score>=75){
				if(score>=90){
					printf("excellent");
				}else{
					printf("average");
				}
			}else{
				printf("passed");
			}
		}else{
			printf("failed");
		}
	}else printf("input error");

	return 0;
}
