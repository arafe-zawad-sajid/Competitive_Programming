    //problem b
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
     
    	int m;
     
    	while(cin>>m && m>0){
    		int avg=m/2;  //avg=range
            int a[avg];
            int b[avg];
            int cnt=0;
            //cout<<m<<endl;
            for(int i=0; pNum[i]<=avg; i++){
            	int sum;
            	int j;
            	
            	for(j=0; pNum[j]<=m; j++){
            		//cout<<"sum: "<<pNum[i]<<"+"<<pNum[j]<<endl;
            		sum=pNum[i]+pNum[j];
            		if(sum>=m){
            			break;
            		}
            	}
            	
            	if(sum==m){
            		a[cnt]=pNum[i];
            		b[cnt]=pNum[j];
            		cnt++;
            		/*
            		if(pNum[i]==b[0] && pNum[j]==a[0] && (a[0]!=b[0])){
            			break;
            			//cout<<i<<" "<<j<<endl;
            		}
            		*/
            	}
            }
     
            printf("%d\n", cnt);
    	}
     
     
    	return 0;
    }