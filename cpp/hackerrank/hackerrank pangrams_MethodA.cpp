//upper to lower
#include <bits/stdc++.h>
using namespace std;

int main (){
  string s;
  char c[1000];
  int* letter = new int[123];
  int counter=0;

  getline(cin, s);
  int len=s.size();
  int i=0;

  if(len<26){
    //do nothing
  }
  else{
    while(i<len){
        int aVal=0;
    if(s[i]>='A' && s[i]<='Z'){
        aVal=(int)s[i];
        aVal=aVal+32;
    }
    else if(s[i]>='a' && s[i]<='z'){
        aVal=(int)s[i];
    }
    if(aVal>=97 && aVal<=122 && letter[aVal]==0){
        counter++;
        letter[aVal]++;
    }
        i++;
    }
  }

  if(counter==26){
     printf("pangram\n");
  }
  else{
     printf("not pangram\n");
  }

  return 0;
}
