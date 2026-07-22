#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string s,S;
	getline(cin,s);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>S;
		if(S=="A"){
			string a;
			cin>>a;
			s=s+a;
			//cout<<s<<endl;
		}else if(S=="D"){
			int a,b;
			cin>>a>>b;
			s=s.substr(0,a)+s.substr(a+b);
			//cout<<s<<endl;
		}else if(S=="M"){
			int a,b;
			string c;
			cin>>a>>b>>c;
			s=s.substr(0,a)+c+s.substr(a+b);
			//cout<<s<<endl;
		}else if(S=="Q"){
			int a,b;
			cin>>a>>b;
			cout<<s.substr(a,b)<<endl;
		}
	}
	
	cout<<s;
	
	return 0;
}
