#include <bits/stdc++.h>
using namespace std;
    int main(){
        int t;
        cin>>t;
        char s;
        int maxLength=0;
        int wordsInBracket=0;
        int countLetters=0;
        
        for(int i=0; i<t; ++i){
            cin>>s;
            if(s!='_' && s!='(' && i!=t-1){
                countLetters++;
            }
            else if(s=='_' || s=='(' || i==t-1){
                if(i==t-1 && s!='_'){
                    countLetters++;
                }
                
                if(maxLength<countLetters){
                    maxLength=countLetters;
                }
                
                countLetters=0;
                
                if(s=='('){
                    char prev=s;
                    while(s!=')'){
                        if(s=='_' && prev!='_' && prev!='('){
                            wordsInBracket++;
                        }
                        
                        prev=s;
                        
                        ++i;
                        cin>>s;
                    }
                    if(s==')' && prev!='(' && prev!='_'){
                        wordsInBracket++;
                    }
                }
                
            }
        }
        
        cout<<maxLength<<" "<<wordsInBracket<<endl;
    }

