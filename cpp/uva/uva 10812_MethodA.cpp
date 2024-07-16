//method 01
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int s;
    int d;
    scanf("%d", &t);

    while(t>0){
        scanf("%d", &s);
        scanf("%d", &d);


        if(s>=d && ((s%2==0 && d%2==0) || (s%2==1 && d%2==1)) ){
            int a=(s+d)/2;
            int b=(s-d)/2;
            printf("%d %d\n", a,b);
        }
        else{
            printf("impossible\n");
        }

        t--;

    }

    return 0;
}
