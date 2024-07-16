//AC
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    scanf("%d", &T);

    while(T--){
        int N;
        scanf("%d", &N);

        long long int input[N];
        for(int i=0; i<N; i++){
            scanf("%lld", &input[i]);
        }

        sort(input, input+N);

        long long int diff=abs(input[1]-input[0]);
        long long int ans=diff;
        for(int i=1; i<N; i++){
            diff=abs(input[i+1]-input[i]);
            if(diff<ans){
               ans=diff;
            }
        }

        cout<<ans<<endl;

    }



    return 0;
}
