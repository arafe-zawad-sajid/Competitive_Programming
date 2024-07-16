#include <bits/stdc++.h>
using namespace std;
   int main() {
    int t;
    scanf("%d", &t);
    getchar();

   	while(t>0){
        char input[100000];
        scanf("%s", input);
   	    int inputLen=strlen(input);

     	int i=0;
     	int j=1;

        for(int c=0; c<inputLen; c++){
            if(i>inputLen && j>inputLen){
                break;
            }
            int ic=(i+c)%inputLen;
            int jc=(j+c)%inputLen;
            if(input[ic]<input[jc]){
                j++;
                c=-1;  //because c++ after this
            }
            else if(input[jc]<input[ic]){
                i=j;
                j++;
                c=-1;  //because c++ after this
            }
        }

     	i++;
     	printf("%d\n", i);

        t--;
   	}

   	return 0;
   }
