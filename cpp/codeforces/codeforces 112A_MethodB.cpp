#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	string b;

	cin>>a;
	cin>>b;

	int valA=0;
	int valB=0;

	int cSize=a.size();

	for(int i=0; i<cSize; i++){
		if(a[i]>='A' && a[i]<='Z'){
			valA = valA +( (int)a[i]+32 );
		}
		else if(a[i]>='a' && a[i]<='z'){
			valA = valA +( (int)a[i] );
		}

		if(b[i]>='A' && b[i]<='Z'){
			valB = valB +( (int)b[i]+32 );
		}
		else if(b[i]>='a' && b[i]<='z'){
			valB = valB +( (int)b[i] );
		}

		if(valA>valB){
	    	printf("1\n");
	    	break;
    	}
    	else if(valA<valB){
    		printf("-1\n");
    		break;
    	}

	}

	if(valA==valB){
		printf("0\n");
	}
	return 0;
}
