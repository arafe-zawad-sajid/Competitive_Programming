//E  //try02
#include <bits/stdc++.h>
#define MAX 46341
using namespace std;

bool prime[MAX];

void primeID(){
	memset(prime, true, MAX);
	prime[0]=prime[1]=false;

	int range=sqrt(MAX);

	for(int i=3; i<=range; i+=2){
		if(prime[i]){
			int skip=i+i;
			for(int j=i*i; j<MAX; j+=skip){
				prime[j]=false;
			}
		}
	}
}

vector<int> pNum;

void pNumPusher(){
    pNum.push_back(2);
    for(int i=3; i<MAX; i+=2){
        if(prime[i]){
            pNum.push_back(i);
        }
    }
}


int main() {
    primeID();
    pNumPusher();

    long long int num;

    while(scanf("%lld", &num) && num>0){
        if(prime[num] && num%2!=0 || num==2){
            long long int mersenne= pow(2,num)-1;
            long long int something=pow(2, num-1);
            long long int ans=mersenne*something;

            bool check=false;

            int sqrtMersenne=sqrt(mersenne);
            int sz=pNum.size();
            //problem is index out of bounds
            for(int i=0; pNum[i]<=sqrtMersenne && i<sz; i++){
            	if(mersenne%pNum[i]==0){
            		check=true;
					break;
        	 	}
            }
            //
            if(!check){
            	printf("Perfect: %lld!\n", ans);
            }
            else{
            	printf("Given number is prime. But, NO perfect number is available.\n");
            }

        }
        else{
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }

	return 0;
}
