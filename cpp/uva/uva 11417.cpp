#include <bits/stdc++.h>
using namespace std;
 
int Gfunc(int N){
	int G=0;
    for(int i=1;i<N;i++){
        for(int j=i+1;j<=N;j++){ 
            G+=__gcd(i,j);
        }
    }
    return G;
}
 
int main() {
	int n;
	while((scanf("%d", &n)) && n>0){
		int ans=Gfunc(n);
		printf("%d\n", ans);
	}
	return 0;
}