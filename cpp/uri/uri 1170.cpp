#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t>0){
		double input;
		scanf("%lf", &input);

		int counter=0;

		while(input>1){
			input=input/2;
			counter++;
		}

		cout<<counter<<" dias"<<endl;

		t--;
	}
	return 0;
}
}
