#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int c=0;
	while(true){
		a=a*3;
		b=b*2;
		if(a>b){
			c++;
			break;

		}
		c++;
	}
	printf("%d",c);
	return 0;
}
