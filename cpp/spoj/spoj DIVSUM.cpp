#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		if(n == 1) {
			cout << 0 << endl;
			continue;
		}
		
		long long ans = 0;
		int root = sqrt(n);
		
		for(int i = 2; i <= root; i++) {
			if(n%i == 0) {
				if(n/i == i) {
					ans += i;
				}
				else {
					ans += i+(n/i);
				}
			}
		}
		
		ans++;
		cout << ans << endl;
	}
	
	return 0;
}