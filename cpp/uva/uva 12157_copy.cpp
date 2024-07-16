#include<bits/stdc++.h>
using namespace std;

int main(){
 int t,n,M,J,x,c=0;
 scanf("%d",&t);
 while(t--){
  scanf("%d",&n);
  M=J=0;
  for(int i=0;i<n;++i){
   scanf("%d",&x);
   M=M+(x+30)/30;
   J=J+(x+60)/60;
  }
  M=M*10;
  J=J*15;
  if(M<J){
  printf("Case %d: Mile %d\n",++c,M);
  }
  else if(J<M){
  	printf("Case %d: Juice %d\n",++c,J);
  }
  else{
  	printf("Case %d: Mile Juice %d\n",++c,M);
  }
 }
 return 0;
}
