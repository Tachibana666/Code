#include <stdio.h>

int main()
{
	int n;
	double i=1.0;
	double m=1.0;
	double k;
	int cnt;
	double sum=0.0;
	int sign=1;
	
	scanf("%d",&n);
	//输入n决定项数，每项的分子是上一项的分母，每项的分母是上一项的分子和分母之和，奇数项加偶数项减，求和并输出 
	for(cnt=1;cnt<=n;cnt++){
		sum+=sign*(i/m);
		sign=-sign;
		k=i;
		i=m;
		m=k+m;
	}
	
	printf("f(%d)=%f\n",n,sum);
	 
	return 0;
}
