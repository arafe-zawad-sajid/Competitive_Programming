#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,M,K;
	scanf("%d", &T);

	while(T--){
		scanf("%d %d %d", &N, &M, &K);
		int max, min;

		while(K){
			if(N>M){M=M+1;
			}
			else if(M>N){
				N=N+1;
			}
			K--;
		}
		printf("%d\n", abs(N-M));
	}

	return 0;
}
