//UVa 12289 - One-Two-Three
#include <bits/stdc++.h>
using namespace std;

int main() {
    int  t;
    scanf("%d", &t);
    
    while(t--){
    	string a;
    	cin>>a;
    	int sizeA=a.size();
    	
    	if(sizeA>3){
    		printf("3\n");
    	}
    	else{
    		if( (a[0]=='o' && a[1]=='n') || (a[0]=='o' && a[2]=='e') || (a[1]=='n' && a[2]=='e') ){
    			printf("1\n");
    		}
    		else if((a[0]=='t' && a[1]=='w') || (a[0]=='t' && a[2]=='o') || (a[1]=='w' && a[2]=='o')){
    			printf("2\n");
    		}
    	}
    	
    	
    }


    return 0;
}