#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y;
    string a,b;

    scanf("%d",&t);
    char vowel[5]={'a','e','i','o','u'};
    for(int i=1;i<=2*t;i++){
        cin>>a>>b;
        x=a.size();
        y=b.size();
        int count=0;
        if(x==y){
            for(int z=0;z<x;z++){
                if(a[z]==b[z]){
                    count++;
                }
                else if((a[z]==vowel[0] || a[z]==vowel[1]||a[z]==vowel[2]||a[z]==vowel[3]||a[z]==vowel[4] ) && (b[z]==vowel[0] || b[z]==vowel[1]||b[z]==vowel[2]||b[z]==vowel[3]||b[z]==vowel[4])){
                    count++;
                }
            }
            if(count==x){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
                printf("No\n");
            }
    }
    return 0;
}
