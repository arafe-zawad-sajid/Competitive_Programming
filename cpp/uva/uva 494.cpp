#include <bits/stdc++.h>
using namespace std;

int main() {
    int words=0;
    string str;

    while(getline(cin, str)){
        int size=str.size();
        for(int i=0; i<size; i++){
        	if( (str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') ){
        		if(str[i+1]<'A' || (str[i+1]>'Z' && str[i+1]<'a') || str[i+1]>'z'){
        			words++;
        		}
        	}
        }

        printf("%d\n", words);
        words=0;
    }

    return 0;
}
