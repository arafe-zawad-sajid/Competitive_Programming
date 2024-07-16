#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int weeks[7];
	for(int i=0; i<7; i++) {
		cin >> weeks[i];
	}
	
	int sum = 0;
	int i = 0;
	while(1) {
		sum += weeks[i%7];
		
		if(sum >= n) {
			cout << (i%7)+1 << endl;
			break;
		}
		i++;
	}
	
	return 0;
}