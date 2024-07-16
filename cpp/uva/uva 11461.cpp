#include <bits/stdc++.h>
using namespace std;

int main() {
	
	while(true) {
		int a, b;
		int n = 0;
		cin >> a >> b;
		
		if(a == 0 and b == 0) {
			break;
		}
		else {
			for(int i = a; i <= b; i++) {
				int root = sqrt (i);
				int sqr = pow(root, 2);
				if(i == sqr) {
					n++;
				}
			}
		}
		
		cout << n << endl;
	}
	
	return 0;
}