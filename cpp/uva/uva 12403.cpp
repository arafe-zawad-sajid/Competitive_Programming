#include <bits/stdc++.h>
using namespace std;

int main() {
    string cmd;
    int donate=0;
    int ans=0;
    int t;
    scanf("%d", &t);

    while(t>0){
        cin>>cmd;

        if(cmd=="report"){
            printf("%d\n", ans);
        }
        else{
            scanf("%d", &donate);
            ans=ans+donate;
        }

        t--;
    }

    return 0;
}
