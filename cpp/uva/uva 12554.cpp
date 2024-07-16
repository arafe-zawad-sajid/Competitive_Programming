#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	cin.ignore();
	string persons[n];
	for(int i=0; i<n; i++){
		getline(cin, persons[i]);
	}
	
	string wish[16]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
	
	int range=16;
	
	if(n>16){
		range=((n/16)+1)*16;
	}
	
	int i=0;
	int j=0;
	for(int c=0; c<range; c++){
		cout<<persons[j]<<": "<<wish[i]<<endl;  
		i=(i+1)%16;
		j=(j+1)%n;
	}
    
	return 0;
}