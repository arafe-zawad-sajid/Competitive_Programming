//UVa 543
#include <bits/stdc++.h>
#include <vector>
#define MAX 10000000
using namespace std;

bool prime[MAX];

void primeID(){
	memset(prime, true, MAX); 
	int range=sqrt(MAX);
 
	for(int i=3; i<=range; i++){
		if(prime[i]){
			int skip=2*i;
			for(int j=i*i; j<MAX; j+=skip){
				prime[j]=false;
			}
		}
	}
 
}
 
vector <int> pNum;
 
void pNumPusher(){
	//pNum.push_back(2);
	for(int i=3; i<MAX; i+=2){
		if(prime[i]){
			pNum.push_back(i);
		}
	}
}
 
int main() {
	primeID();
    pNumPusher();
    int x=pNum.size();
    
	int m;
	
	while(scanf("%d", &m) && m>0){
        int a;
        int b;
    
        for(int i=0; i<x; i++){
        	int sum;
        	int j;
        	for(j=0; j<x; j++){
        		sum=pNum[i]+pNum[j];
        		if(sum>=m){
        			break;
        		}
        	}
        	if(sum==m){
        		a=pNum[i];
        		b=pNum[j];
         		break;
        	}
        }
    
        printf("%d = %d + %d\n", m,a,b);
	}
    
 
	return 0;
}