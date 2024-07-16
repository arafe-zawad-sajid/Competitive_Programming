
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
    	int t;
    	cin>>t;
    	char String[t];
    	int maxLength=0;
    	int wordsInBracket=0;
    	int countLetters=0;

    	for(int i=0; i<t; ++i){
    		cin>>String[i];
    	}

    	for(int i=0; i<t; ++i){
    		if(String[i]!='_' && String[i]!='(' && i!=t-1){
    			countLetters++;
    		}
    		else if(String[i]=='_' || String[i]=='(' || i==t-1){
                if(i==t-1 && String[i]!='_'){
                countLetters++;
                }

    			if(maxLength<countLetters){
    				maxLength=countLetters;
    			}

    				countLetters=0;

    			if(String[i]=='('){
    			char prev=String[i];
    			++i;
    			while(String[i]!=')'){
    				if(String[i]=='_' && prev!='_' && prev!='('){
    					wordsInBracket++;
    				}
    				//else if(String[i]!='_'){
    					prev=String[i];
    				//} 
    				++i;
    			}
    			if(String[i]==')' && prev!='(' && prev!='_'){
    				wordsInBracket++;
    			}
    	   	}

    	}

               /* cout<<"For i= "<<i<<endl;
    			cout<<"countLetters: "<<countLetters<<endl;
    			cout<<"maxLength: "<<maxLength<<endl; */
    }
    	cout<<maxLength<<" "<<wordsInBracket<<endl;
}