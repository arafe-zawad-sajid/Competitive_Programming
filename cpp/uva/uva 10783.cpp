#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	int i=1;
	
	while(i<=t){
		int a; 
		int b;
		scanf("%d %d", &a, &b);
		if(a%2==0){
			a++;
		}
		if(b%2==0){
			b--;
		}
		
		int sum=0;
		
		for(int j=a; j<=b; j=j+2){
			sum=sum+j;
		}
		
		printf("Case %d: %d\n" , i, sum);
		
		i++;
	}
	
	return 0;
}