//Secret Research
#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--){
		string s;
		cin>>s;
		int len=s.size();
		
		if(len<=2){
			printf("+\n");
		}
		else{
			if(s[0]=='9' && s[len-1]=='4'){
				printf("*\n");
			}
			else if(s[len-2]=='3' && s[len-1]=='5'){
				printf("-\n");
			}
			else{
				printf("?\n");
			}
		}
	}
	
	return 0;
}