#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t>0){
        string input;
        cin>>input;
        int result=0;

        int inputLen=input.size();
        int minIndex[inputLen];
        char minChar=input[0];
        minIndex[0]=0;
        int size=0;

        for(int i=1; i<inputLen; i++){
            if(input[i]<minChar){
                minIndex[size]=i;
                minChar=input[i];
            }
            else if(input[i]==minChar){
                minIndex[++size]=i;
            }
        }

     if(size==1){
         cout<<minIndex[0]+1<<endl;
     }
     else if(size==inputLen){
         cout<<1<<endl;
     }
     else{
         int j=1;
         minChar=input[minIndex[0]+1];

         for(int i=1; i<=size; i++){
             int next=(minIndex[i]+j)%inputLen;
             if(input[next]<minChar){
                 result=minIndex[i];
                 minChar=input[next];
             }
             else if(input[next]==minChar){

             }
         }

         j++;
     }

     t--;
     }

    return 0;
    }
