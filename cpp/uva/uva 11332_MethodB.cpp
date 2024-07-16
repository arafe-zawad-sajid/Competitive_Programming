#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int valB;
	long long int sumB=0;
	
	while(scanf("%lld", &valB) && valB!=0){
		while(1){
			sumB=sumB+(valB%10);
	       	valB=valB/10;
	       	if( valB==0 && (sumB/10)!=0 ){
	       		valB=sumB;
	       		sumB=0;
	       	}
	       	else if( valB==0 && (sumB/10)==0 ){
	       		break;
	       	}
		}
		
		printf("%lld\n", sumB);
		sumB=0;
	}
 
		
	return 0;
}