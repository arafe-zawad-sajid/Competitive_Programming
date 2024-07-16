#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);

	for(int i=1; i<=t; i++){
		string links[10];
		int relevance[10];
		for(int j=0; j<10; j++){
			cin>>links[j]>>relevance[j];
		}
		
		printf("Case #%d:\n", i);
		
		int maxR=relevance[0];
		for(int j=1; j<10; j++){
			if(relevance[j]>maxR){
				maxR=relevance[j];
			}
		}
		
		for(int j=0; j<10; j++){
			if(relevance[j]==maxR){
				cout<<links[j]<<endl;
			}
		}

	}


	return 0;
}