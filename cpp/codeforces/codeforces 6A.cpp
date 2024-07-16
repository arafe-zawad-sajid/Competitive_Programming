#include <bits/stdc++.h>
using namespace std;

int main (){
int a,b,c,d;
cin>>a>>b>>c>>d;
if((a+b>c&& b+c>a&& c+a>b) || (a+d>b&&b+d>a&&b+a>d) || (b+c>d&&c+d>b&&b+d>c) || (a+d>c && d+c>a && c+a>d)){
 cout<<"TRIANGLE\n";
 }
 else if(a+b==c||b+c==a||c+a==b||d+b==c||b+c==d||c+d==b||a+d==c||d+c==a||c+a==d||a+b==d||b+d==a||d+a==b){
 cout<<"SEGMENT\n";
 }
else{
 cout<<"IMPOSSIBLE\n";
 }
return 0;
}
