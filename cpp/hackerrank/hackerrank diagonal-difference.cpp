#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	int s=t-1;
	int h=1;
	for(int i=1; i<=s; i++){
		printf(" ");
		if(i==s){
			for(int j=1; j<=h; j++){
			printf("#");
	    	}
	    	printf("\n");
	    	s--;
	    	h++;
	    	i=0;
		}
	}
	if(s==0){
		for(int i=1; i<=t; i++){
			printf("#");
		}
		printf("\n");
	}
	return 0;
}