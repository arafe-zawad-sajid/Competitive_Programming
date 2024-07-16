#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	if(s[0]>='a' && s[0]<='z'){
		int i=s[0]-32;
    	s[0]=(char)i;
	}
	cout<<s<<endl;
	return 0;
}