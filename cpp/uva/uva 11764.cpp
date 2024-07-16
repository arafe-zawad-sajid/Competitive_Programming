//UVa 11764
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	int T=1;
	
	while(T<=t){
		int n;
		scanf("%d", &n);
		int arr[n];
		
		int high=0;
		int low=0;
		
		scanf("%d", &arr[0]);
		for(int i=1; i<n; i++){
			scanf("%d", &arr[i]);
			if(arr[i]>arr[i-1]){
				high++;
			}
			else if(arr[i]<arr[i-1]){
				low++;
			}
		}
		
		printf("Case %d: %d %d\n", T,high,low);
		
		T++;
	}
	
	return 0;
}