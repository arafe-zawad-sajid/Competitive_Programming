#include <bits/stdc++.h>
using namespace std;

int main (){
int t;
cin>>t;

char O[t];
char C[t];

for(int c=0;c<t;++c){
    cin>>O[c];
}
for(int c=0;c<t;++c){
    cin>>C[c];
}
 int n,z=0,count=0;

    for(int c=0;c<t;++c){
        z=abs(O[c]-C[c]);
      if(z>5){
         if(O[c]>C[c]){
            z=(C[c]+10)-O[c];
            count=count+z;
            }
      else{
            z=O[c]+10-C[c];
            count=count+z;
            }
        }
        else{
            count=count+z;
            }
    }

    cout<<count<<endl;

return 0;
}
