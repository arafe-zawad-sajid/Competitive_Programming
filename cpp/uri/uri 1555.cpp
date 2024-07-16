#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t>0){
		int x;
		int y;
		scanf("%d%d", &x,&y);

		int Rafael=((3*x)*(3*x)) + (y*y);
		int Beto=(2*(x*x)) + (5*y*5*y);
		int Carlos=(-100*x)+(y*y*y);

		if(Rafael>Beto && Rafael>Carlos){
				printf("Rafael ganhou\n");
			}
		else if(Carlos>Beto && Carlos>Rafael){
				printf("Carlos ganhou\n");
			}
		else{
			printf("Beto ganhou\n");
		}

		t--;
	}
	return 0;
}
