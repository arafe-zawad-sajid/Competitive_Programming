#include <bits/stdc++.h>
using namespace std;

int main() {
string a;
string e="HELLO";
string s="HOLA";
string g="HALLO";
string f="BONJOUR";
string i="CIAO";
string r="ZDRAVSTVUJTE";
int count=1;
while(cin>>a){
 if(a=="#")
  break;
 else if(a==e)
  printf("Case %d: ENGLISH\n",count);
 else if(a==s)
  printf("Case %d: SPANISH\n",count);
 else if(a==g)
  printf("Case %d: GERMAN\n",count);
 else if(a==f)
  printf("Case %d: FRENCH\n",count);
 else if(a==i)
  printf("Case %d: ITALIAN\n",count);
 else if(a==r)
  printf("Case %d: RUSSIAN\n",count);
 else{
  printf("Case %d: UNKNOWN\n",count);
 }
  count++;
}
	return 0;
}
