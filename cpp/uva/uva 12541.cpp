//I
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	cin.ignore();

	string name[N];
	int day[N];
	int month[N];
	int year[N];

	for(int i=0; i<N; i++){
		string a;
		getline(cin, a);
		stringstream info;
		info<<a;
		info>>name[i];
		info>>day[i];
		info>>month[i];
		info>>year[i];
	}

	int ans1=0;
	int ans2=0;

	for(int i=1; i<N; i++){
		if(year[ans1]<year[i]){
			ans1=i;
		}
		else if(year[ans2]>year[i]){
			ans2=i;
		}
		else if(year[ans1]==year[i]){
			if(month[ans1]<month[i]){
				ans1=i;
			}
			else if(month[ans1]==month[i]){
				if(day[ans1]<day[i]){
					ans1=i;
				}
			}
		}
		else if(year[ans2]==year[i]){
			if(month[ans2]>month[i]){
				ans2=i;
			}
			else if(month[ans2]==month[i]){
				if(day[ans2]>day[i]){
					ans2=i;
				}
			}
		}
	}
	cout<<name[ans1]<<"\n"<<name[ans2]<<endl;
	//printf("%s\n", name[ans1]);

	return 0;
}
