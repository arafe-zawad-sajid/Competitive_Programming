//UVa 11466 //Accepted :D
#include <bits/stdc++.h>
#define MAX 10000000  //upto 10^7
using namespace std;

bool prime[MAX];

void primeID(){
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

vector <int> pNum;

void pNumPusher(){
	pNum.push_back(2);
	for(int i=3; i<MAX; i+=2){
		if(prime[i]){
			pNum.push_back(i);
		}
	}

}

long long int LPD(long long int x){  //ans
    int lpd=2;

    if(x<=MAX && x%2!=0 || x==2){
	     if(prime[x]){  //if prime
      		return -1;
	     }
	}
//let composite
	    long long int range=sqrt(x);
		int sz=pNum.size();
		int cnt=0;
		int temp=0;

		for(long long int j=0; pNum[j]<=range && j<sz; j++){
			while(x%pNum[j]==0){
				temp=pNum[j];
				x=x/temp;
         	}
			if(temp>0){
				lpd=temp;
				cnt++;
			}
			if(x==1){
				break;
			}
		}
		if(x!=1){  //if prime
			return x;
		}
		else if(cnt<=1 && x==1){  //if n^x i.e, n*n*n...
			return -1;
		}

		return lpd;

}

int main() {
    primeID();
    pNumPusher();

    long long int t;

    while(scanf("%lld", &t) && t){
    	if(t<0){
    		t=t*(-1);
    	}

    	long long int ans=LPD(t);

    	if(ans==t){  //if prime
    		printf("-1\n");
    	}
    	else{
    		printf("%lld\n", ans);
    	}

    }

	return 0;
}
