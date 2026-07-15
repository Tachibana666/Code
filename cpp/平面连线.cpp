#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,m,gov=0;
    string s;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        string s1;
        getline(cin,s1);
        s+=s1;
    }
    for(int j=0;j<n*m;j+=m){
        for(int k=0;k+3<m;k++){
            if(s.substr(k+j,4)=="rrrr"){
            gov=1;
            }else if(s.substr(k+j,4)=="pppp"){
            gov=2;
            }
        }
    }
    for(int j=0;j<m;j++){
        for(int k=0;k+3*m<n*m;k+=m){
            if(s.substr(k+j,1)+s.substr(k+j+m,1)+s.substr(k+j+2*m,1)+s.substr(k+j+3*m,1)=="rrrr"){
                gov=1;
            }else if(s.substr(k+j,1)+s.substr(k+j+m,1)+s.substr(k+j+2*m,1)+s.substr(k+j+3*m,1)=="pppp"){
                gov=2;
            }
        }
    }
    for(int j=3*m;j<n*m;j+=m){
        for(int k=j;(k-2*m+2)>m&&(k-2*m+2+1)%m!=0;k=k-m+1){
            if(s.substr(k,1)+s.substr(k-m+1,1)+s.substr(k-2*m+2,1)+s.substr(k-3*m+3,1)=="rrrr"){
                gov=1;
            }else if(s.substr(k,1)+s.substr(k-m+1,1)+s.substr(k-2*m+2,1)+s.substr(k-3*m+3,1)=="pppp"){
                gov=2;
            }
        }
    }
    for(int j=m-1;j+3*m<n*m;j+=m){
        for(int k=j;(k+2*m-2)<(n-1)*m&&(k+2*m-2)%m!=0;k=k+m-1){
            if(s.substr(k,1)+s.substr(k+m-1,1)+s.substr(k+2*m-2,1)+s.substr(k+3*m-3,1)=="rrrr"){
                gov=1;
            }else if(s.substr(k,1)+s.substr(k+m-1,1)+s.substr(k+2*m-2,1)+s.substr(k+3*m-3,1)=="pppp"){
                gov=2;
            }
        }
    }
    if(gov==1){
        cout<<"kou";
    }else if(gov==2){
        cout<<"yukari";
    }else{
        cout<<"to be continued";
    }
    
    return 0;
}
