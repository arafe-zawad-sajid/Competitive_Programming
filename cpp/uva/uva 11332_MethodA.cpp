#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int n2=0,n3=0,x=0,sum=0;
while(cin>>n){
if(n!=0){
    while(n!=0){
        x=n%10;
        sum=sum+x;
        n=n/10;
}
n2=sum;
sum=0;
x=0;


if(n2<=9){
    cout<<n2<<endl;
    break;
}

 else if(n2>9){
        while(n2!=0){
        x=n2%10;
        sum=sum+x;
        n2=n2/10;
}
n3=sum;
sum=0;
x=0;

if(n3<=9){
cout<<n3<<endl;
break;
}
 else if(n3>9){
    while(n3!=0){
        x=n3%10;
        sum=sum+x;
        n3=n3/10;
}
cout<<sum<<endl;
break;
}

}

}
else if(n==0){
	break;
}
}
return 0;
}
