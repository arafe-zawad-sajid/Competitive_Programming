//A //WA
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	int arr[6];
	
	arr[0]=a+b*c;
	arr[1]=a*(b+c);
	arr[2]=a*b*c;
	arr[3]=(a+b)*c;
	arr[4]=a+b+c;
	arr[5]=a*(b+c);
	
	int maxSoFar=arr[0];
	
	for(int i=1; i<=5; i++){
		if(maxSoFar<arr[i]){
			maxSoFar=arr[i];
		}
	}
	
	cout<<maxSoFar<<endl;
	
	return 0;
}