#include<bits/stdc++.h>
using namespace std;
int main(){
int t,count=0;
cin>>t;
int a[t];
int b[t];
for(int c=0;c<t;++c){
    cin>>a[c];
    b[c]=a[c];
}
sort(b,b+t);
if(t==2){
        cout<<"yes"<<endl;
    cout<<b[0]<<" "<<b[0]<<endl;
}
else if(t>2){
    for(int c=0;c<t;++c){
        if(b[c]!=a[c]){
         count++;
        }
    }
    if(count==2){
        cout<<"yes"<<endl;
        for(int c=0;c<t;++c){
            if(b[c]>a[c]){
                cout<<a[c]<<" "<<b[c]<<endl;
                break;
            }
            else if(b[c]<a[c]){
                cout<<b[c]<<" "<<a[c]<<endl;
                break;
            }
    }
    }
    else{
        cout<<"no"<<endl;
    }
}

return 0;
}
