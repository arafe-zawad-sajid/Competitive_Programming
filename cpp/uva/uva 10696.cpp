//C //WA
#include <bits/stdc++.h>
using namespace std;

int f91(int n){
    int ans;
    if(n<=100){
        ans=f91(f91(n+11));
    }
    else{
        ans=n-10;
       
    }
    return ans;
}

int main() {
    int N;
   
    while(scanf("%d", &N) && N!=0){
        int ans=f91(N);
        printf("f91(%d) = %d\n", N,ans);
    }
   
    return 0;
}