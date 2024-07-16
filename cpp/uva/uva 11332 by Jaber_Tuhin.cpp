#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	while(scanf("%lld",&n)==1){
		if(n == 0){
			break;
		}
		if(n>=10){
			while(n>=10){
				int n2 = 0;
				while(n>0){
					int a = n%10;
					n2 += a;
					n /= 10;
				}
				n = n2;
			}
		}
		printf("%lld\n",n);
	}
	return 0;
}
