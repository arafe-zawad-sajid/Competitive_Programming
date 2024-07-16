#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q,i,c;
    string str;
    scanf("%d",&n);
    string a[n*2];
    getline(cin,str);
    for(i=0;i<n*2;i++){
        getline(cin,a[i]);
    }
    scanf("%d",&q); getline(cin,str);
    for(i=1;i<=q;i++){
        getline(cin,str);
        for(c=0;c<n*2;c++){
        if(str==a[c]){
            cout<<a[c+1]<<endl;
            break;
        }
        }
    }
    return 0;
}
