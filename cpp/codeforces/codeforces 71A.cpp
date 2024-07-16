#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t>0){
		string word;
		cin>>word;
		int size=word.size();
		if(size>10){
			cout<<word[0]<<size-2<<word[size-1]<<endl;
		}
		else{
			cout<<word<<endl;
		}
		t--;
	}
	return 0;
}
