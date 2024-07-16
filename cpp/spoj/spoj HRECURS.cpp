#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	int N;

	scanf("%d", &T);

	for(int i=0; i<T; i++){
		scanf("%d", &N);

		int arr [N];
		int sum=0;

		for(int j=0; j<N; j++){
			scanf("%d", &arr[j]);
			sum=sum+arr[j];
		}
		printf("Case %d: %d\n", i+1, sum);
	}



	return 0;
}
