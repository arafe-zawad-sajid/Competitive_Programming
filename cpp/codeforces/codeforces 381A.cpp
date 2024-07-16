#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);

    int input[t];
    int i=0;

    while(i<t){
        scanf("%d", &input[i]);
        i++;
    }

    int Sereja=0;
    int Dima=0;

    int left=0;
    int right=t-1;

    for(i=0; i<t; i++){
        if(i%2==0){  //Sereja's turn
            if(input[left]>input[right]){
                Sereja+=input[left];
                left++;
            }
            else{
                Sereja+=input[right];
                right--;
            }
        }
        else{  //Dima's turn
            if(input[left]>input[right]){
                Dima+=input[left];
                left++;
            }
            else{
                Dima+=input[right];
                right--;
            }
        }
    }

    cout<<Sereja<<" "<<Dima<<endl;

}
