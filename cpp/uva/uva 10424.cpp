//UVa 10424 - Love Calculator
#include <bits/stdc++.h>
using namespace std;

int main() {
	string nameA;
	string nameB;
	
	while( getline(cin,nameA) && getline(cin,nameB) ){
		int lenA=nameA.size();
	    int lenB=nameB.size();
	    
	    int valA=0;
		int valB=0;
		
		for(int i=0; i<lenA; i++){
			if(nameA[i]>='a' && nameA[i]<='z'){
				int tmp=(int)nameA[i];
				tmp=tmp%96;
				valA=valA+tmp;
			}
			else if(nameA[i]>='A' && nameA[i]<='Z'){
				int tmp=(int)nameA[i];
				tmp=(tmp+32)%96;
				valA=valA+tmp;
			}
			
		}
		
		for(int i=0; i<lenB; i++){
			if(nameB[i]>='a' && nameB[i]<='z'){
				int tmp=(int)nameB[i];
				tmp=tmp%96;
				valB=valB+tmp;
			}
			else if(nameB[i]>='A' && nameB[i]<='Z'){
				int tmp=(int)nameB[i];
				tmp=(tmp+32)%96;
				valB=valB+tmp;
			}
			
		}
		
		int sumA=0;
		
		while(1){
			sumA=sumA+(valA%10);
	       	valA=valA/10;
	       	if( valA==0 && (sumA/10)!=0 ){
	       		valA=sumA;
	       		sumA=0;
	       	}
	       	else if( valA==0 && (sumA/10)==0 ){
	       		break;
	       	}
		}
		
		int sumB=0;
		
		while(1){
			sumB=sumB+(valB%10);
	       	valB=valB/10;
	       	if( valB==0 && (sumB/10)!=0 ){
	       		valB=sumB;
	       		sumB=0;
	       	}
	       	else if( valB==0 && (sumB/10)==0 ){
	       		break;
	       	}
		}
		
		double result;
		
		if(sumA>sumB){
			result=((double)sumB/(double)sumA)*100;
		}
		else{
			result=((double)sumA/(double)sumB)*100;
		}
		
		printf("%.2f %\n", result);
		
		
	}
	
	return 0;
}