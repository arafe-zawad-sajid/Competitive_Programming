#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	int b;
	
	while(cin>>a>>b && (a!=0 || b!=0)){
		string sA;
    	string sB;
	
		stringstream ssA;
		stringstream ssB;
		
		ssA<<a;
		ssB<<b;
		
		ssA>>sA;
		ssB>>sB;
		
		int lenA=sA.size();
		int lenB=sB.size();
		
		int range;
		
	//	bool aGreater=false;
	//	bool bGreater=false;
		
		if(lenA>lenB){
			range=lenA;
		}
		else{
			range=lenB;
		}
		
		int carry=0;
		int c=0;
		for(int i=1; i<=range; i++){
			int indexA=lenA-i;
			int indexB=lenB-i;
			int aVal;
			int bVal;
			
			if(indexA<0){
				aVal=0;
			}
			if(indexB<0){
				bVal=0;
			}
			
			if(indexA<0 && indexB<0){
				break;
			}
			stringstream si;
			stringstream sj;
			if(indexB>=0){
				si<<sB[indexB];
				si>>bVal;
			}
			if(indexA>=0){
				sj<<sA[indexA];
				sj>>aVal;
			}
			
			if((aVal+bVal+c)>9){
				carry++;
				c=1;
			}
			else{
				c=0;
			}
				
		}
		
		if(carry==0){
			printf("No carry operation.\n");
		}
		else if(carry==1){
			printf("1 carry operation.\n");
		}
		else{
			printf("%d carry operations.\n", carry);
		}
			
	}
	
	return 0;
}