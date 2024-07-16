#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	int a[t];
	for(int i=0; i<t; i++){
		scanf("%d", &a[i]);
	}
	for(int i=t-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}