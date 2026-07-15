#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;
    cin>>n>>c;
    int a=(n+1)/2,cnt=0,num=1,tal=n;
    for(;a>=num;num+=2){
        a-=num;
        cnt++;
    }
    num-=2;
    for(int i=0;i<cnt;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=0;j<num-i*2;j++){
            cout<<c;
            tal-=1;
        }
        cout<<endl;
    }
    for(int i=0;i<cnt-1;i++){
        for(int k=0;k<cnt-2-i;k++){
            cout<<" ";
        }
        for(int j=0;j<num-(cnt-2-i)*2;j++){
            cout<<c;
            tal-=1;
        }
        cout<<endl;
    }
    cout<<tal;
    return 0;
}