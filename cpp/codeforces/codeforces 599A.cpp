#include <bits/stdc++.h>
using namespace std;

int main() {
	int d1, d2, d3;
	scanf("%d %d %d", &d1,&d2,&d3);


	long long int way1=d1+d2+d3;
	long long int way2=2*(d1+d2);
	long long int way3=2*(d1+d3);
	long long int way4=2*(d2+d3);
	long long int way5=2*(d1+d2);

	long long int mx=min(way1, way2);
	mx=min(mx, way3);
	mx=min(mx, way4);
	mx=min(mx, way5);

	printf("%lld", mx);

	return 0;
}
