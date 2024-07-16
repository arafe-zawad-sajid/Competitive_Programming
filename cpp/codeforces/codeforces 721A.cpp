#include <bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    char a[t];
    char prev=' ';
    int countBStacks=0;
    for(int i=0; i<t; ++i){
        cin>>a[i];
        if(a[i]=='B' && (prev==' ' || prev=='W') ){
            countBStacks++;
            prev=a[i];
        }
        else{
            prev=a[i];
        }
    }

    cout<<countBStacks<<endl;

    int countB=0;
    prev=' ';

    for(int i=0; i<t; ++i){
        if(a[i]=='B'){
            countB++;
            prev=a[i];
            if(i==t-1){
                cout<<countB<<" ";
            }
        }
        else if(a[i]=='W' && prev=='B'){
            cout<<countB<<" ";
            countB=0;
            prev=a[i];
        }
    }

}
