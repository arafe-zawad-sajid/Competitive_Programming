#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int x,b,c,i;
    cin>>a;
    x=a.size();
    for(i=0;i<x;i++){
        for(c=i+1;c<x;c++){
            if(a[i]==a[c]){
                b++;
                break;
            }
        }
    }
    b=x-b;
    if(b%2==0){
        cout<<"CHAT WITH HER!\n";
    }
    else{
        cout<<"IGNORE HIM!\n";
    }
return 0;
}
