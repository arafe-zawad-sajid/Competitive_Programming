#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3];
	for(int i=0; i<3; ++i){
		cin>>a[i];
	}
	sort(a, a+3);
	a[0]=a[1]-a[0];
	a[2]=a[2]-a[1];
	a[2]=a[2]+a[0];
	cout<<a[2];
}
