  //F
    #include <bits/stdc++.h>
    #define MAX 10000000
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
    int sz=0;

    void pNumPusher(){
    	pNum.push_back(2);
    	sz=1;
    	for(int i=3; i<MAX; i+=2){
    		if(prime[i]){
    			pNum.push_back(i);
    			sz++;
    		}
    	}
    }


    int main() {
    	primeID();
        pNumPusher();

    	int m;

    	while(scanf("%d", &m) && m){
            int a=0;
            int b=0;
            int range=sqrt(m);

           	for(int i=0; pNum[i]<=range; i++){
               	int temp1=pNum[i];
               	int temp2=m-temp1;

              	if(prime[temp2] && temp2%2!=0 || temp2==2){
               		a=temp1;
               		b=temp2;
               		break;
               	}

            }

            printf("%d:\n", m);

            if(a!=0 && b!=0){
            	printf("%d+%d\n", a,b);
            }
            else{
            	printf("NO WAY!\n");
            }

    	}


    	return 0;
    }
