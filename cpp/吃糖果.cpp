#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int happy=0,sad=0;
    //cout<<"³¤¶ÈÎª"<<str.length()<<endl;
    for(int i=0;i<(str.length())-1;i++){
        //cout<<"str.sub("<<i<<","<<i+1<<")="<<str.substr(i,i+1)<<endl;
		if(str.substr(i,2)=="-)"){
            happy++;
            cout<<"happy+"<<endl;
        }else if(str.substr(i,2)=="-("){
            sad++;
            cout<<"sad+"<<endl;
        }
    }
    cout<<"happy="<<happy<<endl;
    cout<<"sad="<<sad<<endl;
	    if(happy>sad){
        cout<<"Happy";
    }else if(happy<sad){
        cout<<"Sad";
    }else if(happy==sad&&happy!=0){
        cout<<"Just so so";
    }else{
        cout<<"None";
    }
    return 0;
}
