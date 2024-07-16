 //D
    #include <bits/stdc++.h>
    #define MAX 1040  
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
     
     
    int main() {
        primeID();
        
        string str;
        
        while(getline(cin, str)){
        	int sz=str.size();
        	int sum=0;
        	for(int i=0; i<sz; i++){
        		int x;
        		if(str[i]>='A' && str[i]<='Z'){
        			x=((int)str[i]%64)+26;
        		}
        		else{
        			x=((int)str[i]%96);
        		}
        		sum=sum+x;
        	}
        	
        	if(sum==2 || sum%2!=0 && prime[sum]){
        		printf("It is a prime word.\n");
        	}
        	else{
        		printf("It is not a prime word.\n");
        	}
        	
        }
     
    	return 0;
    }