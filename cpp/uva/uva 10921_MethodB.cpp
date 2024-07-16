#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;

    int val=2;
    map<char,int> mp;

    for(char c='A'; c<='Z'; c++){
    	mp[c]=val;
    	if(c=='C' || c=='F' || c=='I' || c=='L' || c=='O' || c=='S' || c=='V' || c=='Z'){
            val++;
    	}
    }

    while(getline(cin,input)){
        for (int i=0; i<input.length(); i++){
            if(input[i]>='A' && input[i]<='Z'){
                cout<<mp[input[i]];
            }
            else{
                cout<<input[i];
            }
        }
        cout<<endl;
	}

    return 0;
}
