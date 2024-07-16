#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    int b=1;

    while(1){
        getline(cin, a);

        if(a=="Hajj"){
            printf("Case %d: Hajj-e-Akbar\n",b);
        }
        else if(a=="Umrah"){
            printf("Case %d: Hajj-e-Asghar\n",b);
        }
        else{
            break;
        }

        b++;
    }

    return 0;
}
