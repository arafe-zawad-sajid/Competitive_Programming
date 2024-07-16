#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x;
  int ans=0;
  int tmp=0;
  cin>>n>>m;
  for (int i=1; i<=n;++i) {
    cin>>x;
    if (tmp + x <= m) {
      tmp=tmp+x;
    }
    else {
      ++ans;
      tmp=x;
    }
  }
  cout<<ans+1;
  return 0;
}
