//WA
#include<bits/stdc++.h>
using namespace std;

long long int range=6227020800;
vector<unsigned long long int> fac;
int length=3;

void factorial(){
    fac.push_back(fac[length-1]*length);
    length++;
    if(fac[length-1]<=range){
        factorial();
    }
    else{
        return ;
    }
}

void pre_calculate(){
    fac.push_back(1);
    fac.push_back(1);
    fac.push_back(2);
    factorial();
}


int main(){
    pre_calculate();
    int input;

    while(scanf("%d", &input)!=EOF){
        input=abs(input);
        if(input<=fac.size()-2){
            unsigned long long int ans=fac[input];
            if(ans<10000){
                printf("Underflow!\n");
            }
            else{
                cout<<ans<<endl;
            }
        }
        else{
            printf("Overflow!\n");
        }

    }



    return 0;
}
