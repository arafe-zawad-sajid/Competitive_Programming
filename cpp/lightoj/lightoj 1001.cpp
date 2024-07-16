#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int N;
		scanf("%d",&N);
		int A=0;
		int B=N;

		if(N>10){
			B=10;
			A=N-10;
		}

		printf("%d %d\n", A,B);

	}
	return 0;
}
