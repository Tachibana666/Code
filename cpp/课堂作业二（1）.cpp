#include <stdio.h>

int main()   //ÓÃswitchÓï¾äÍê³É 
{
	int score,c;
	scanf("%d",&score);
	c=score/15;

	if(score>=0&&score<=100){
		switch(c){
			case 0: 
				case 1:
					case 2:
						case 3:printf("failed");break;
			case 4:printf("passed");break;
			case 5:printf("average");break;
			case 6:printf("excellent");break;	
		}
	}else printf("input error");

	return 0;
}
