#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,c,n;
	scanf("%d",&c);
for(i=1;i<=c;++i){
	scanf("%d",&n);
n=n*567;
n=n/9;
n=n+7492;
n=n*235;
n=n/47;
n=abs(n-498);
n=n/10;
n=n%10;
printf("%d\n",n);
}


	return 0;
}
