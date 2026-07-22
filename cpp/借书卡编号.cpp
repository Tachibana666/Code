#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int N,i;
  int a[6]={0};
  scanf("%d",&N);

  int cnt=0;
  i=N;
  while(i>0){
    i/=10;
    //printf("i=%d\n",i);
    cnt++;
  }
  //printf("cnt=%d\n",cnt);

  int j;
  for(j=0;j<cnt;j++){
    a[j]=N%10;
    printf("a[%d]=%d\n",j,a[j]);
    N/=10;
  }

  int m,n;
  m=a[0]+a[1]+a[2]; 
  n=a[3]+a[4]+a[5];
  if(m==n){
    printf("YES");
  }else{
    printf("NO");
  }

  return 0;
}
