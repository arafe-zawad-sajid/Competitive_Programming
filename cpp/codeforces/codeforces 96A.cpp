#include <iostream>
using namespace std;

int main() {
	string s;
	int dangerCount=0;
	cin>>s;
	int size=s.size();
	for(int i=0; i<size; i++){
		if(s[i]==s[i+1]){
			dangerCount++;
		    	if(dangerCount==6){
	    		cout<<"YES"<<endl;
	    		break;
	    	}
		}
		else{
			dangerCount=0;
		}
	}

	if(dangerCount!=6){
	   	cout<<"NO"<<endl;
	}

	return 0;
}
