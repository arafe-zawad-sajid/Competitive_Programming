#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;  //price 1 unit
	long long int n;  //money he has
	int w;  //bananas he wants
	
	cin>>k;
	cin>>n;
	cin>>w;
	
	int t=0;  //total price 
	
	for(int i=1; i<=w; i++){
		t=t+(i*k);
	}
	
	int diff=t-n;
	
	if(diff<=0){
		cout<<0<<endl;
	}
	else{
		cout<<diff<<endl;
	}
	
	return 0;
}