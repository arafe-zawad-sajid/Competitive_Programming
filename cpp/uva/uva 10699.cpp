        //problem f
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
            int x=pNum.size();
     
        	int m;
     
        	while(cin>>m && m>0){
        		int range=sqrt(m);
        		
        		int cnt=0;
        		
        		if(m%2!=0 && prime[m]){
        			printf("%d : 1\n", m);
        		}
        		else{
        			for(int i=0; i<x; i++){  
        	    		if(m%pNum[i]==0){
            				cnt++;
            			}
            		}
        		printf("%d : %d\n", m,cnt);
            	}
        		
        	}
     
     
        	return 0;
        }