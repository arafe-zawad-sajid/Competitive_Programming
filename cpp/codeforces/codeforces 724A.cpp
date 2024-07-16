#include <bits/stdc++.h>
using namespace std;

int main(){
    int daysInMonths[]={3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};
    string nameOfDays[]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    string day1;
    getline(cin, day1);
    string day2;
    getline(cin, day2);
    int day1Index;
    string s;
    for(int i=0; i<7; ++i){
        if(day1==nameOfDays[i]){
            day1Index=i;
            break;
        }
    }
    for(int i=0; i<12; ++i){
        if(nameOfDays[(day1Index+daysInMonths[i])%7]==day2){
            cout<<"YES"<<endl;
            break;
        }
        else if(i==11){
            cout<<"NO"<<endl;
        }
    }
}
