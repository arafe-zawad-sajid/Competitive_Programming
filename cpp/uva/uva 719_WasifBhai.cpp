//TLE
#include <bits/stdc++.h>
using namespace std;
   int main() {
    int t;
    scanf("%d", &t);

   	while(t>0){
        string input;
        cin>>input;//check
   	    int inputLen=input.size();
     	int i=0;
     	int j=1;

    	input=input+input;

    	while(i<=inputLen && j<=inputLen){
    	    for(int c=0; c<inputLen; c++){
   	        	if(input[i+c]<input[j+c]){
   	        	    j++;
                    break;
   	        	}
   	        	else if(input[j+c]<input[i+c]){
   	        	    i=j;
   	        	    j++;
   	        	    break;
   	        	}
        	}
     	}

     	i++;
     	printf("%d\n",i);

        t--;
   	}

   	return 0;
   }
