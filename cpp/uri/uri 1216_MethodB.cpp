#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int sum=0;
	int tmp;
	int i=0;
	while(!cin.eof()){
		getline(cin,s);
		scanf("%d", &tmp);
		sum=sum+tmp;
		i++;
	}

	printf("%.1f\n", (double)sum/(double)i);

	return 0;
}
