#include <bits/stdc++.h>
using namespace std;

int main() {
 int  a,b,c,t;
 cin>>t;
 for(int i=1;i<=t;++i){
 	cin>>a>>b>>c;
 	if((a+b)>c){
 		cout<<"OK"<<endl;
 	}
 else cout<<"Wrong!!"<<endl;
 }
	return 0;
}
