//UVa 10394
#include <bits/stdc++.h>
#define MAX 20000000  //upto 20^7
using namespace std;

bool prime[MAX];

void primeGenerator(){
	memset(prime, true, MAX);

	int range=sqrt(MAX);

	for(int i=3; i<=range; i+=2){
		if(prime[i]){
			int skip=2*i;
			for(int j=i*i; j<MAX; j+=skip){
				prime[j]=false;
			}
		}
	}

}

vector<int> lTwin;
vector<int> rTwin;

void ans(){
	for(int i=3; i<MAX; i+=2){
		if(prime[i] && prime[i+2]){
			lTwin.push_back(i);
			rTwin.push_back(i+2);
		}
	}

}

int main() {
    primeGenerator();
    ans();
    int p;

    while(scanf("%d", &p)!=EOF){
    	printf("(%d, %d)\n", lTwin[p-1], rTwin[p-1]);
    }

	return 0;
}
