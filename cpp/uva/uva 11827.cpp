//G
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	cin.ignore();

	while(T--){
		string input;
		getline(cin, input);

		stringstream ss;
		ss<<input;
		vector<int> v;
		int temp;

		for(int i=0; ss>>temp; i++){
			v.push_back(temp);
		}

		int max_gcd=0;
		int sz=v.size();

		for(int i=0; i<sz; i++){
            for(int j=i+1; j<sz; j++){
                max_gcd=max(__gcd(v[i], v[j]), max_gcd);
            }
		}

		cout<<max_gcd<<endl;

	}

	return 0;
}
