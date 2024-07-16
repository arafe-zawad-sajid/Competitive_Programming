#include <bits/stdc++.h>
using namespace std;

int main() {
long long int a;
long long int b;
scanf("%lld", &a);
scanf("%lld", &b);
    b=(b*(b+1))/2;
if(a>1){
a--;
a=(a*(a+1))/2;
b=b-a;
}
printf("%lld\n", b);

    return 0;
}
