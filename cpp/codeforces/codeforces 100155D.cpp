#include <bits/stdc++.h>
using namespace std;
int main(){
    //add test case for practice contest problem C
  int N,K,x;

  while(cin>>N>>K){
  	int tmp=0;
  for (int i=1; i<=N;++i) {
    cin>>x;
    if (x/K<=K || x/K>=K) {
      tmp=tmp+x/K;
    }
  }
  cout<<tmp<<endl;
  }
  return 0;
}
