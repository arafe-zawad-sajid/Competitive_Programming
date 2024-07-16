#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int L;
        scanf("%d", &L);

        double W, R;

        R=L/5.0;
        W=3.0*R;
//double pi=acos(-1.0);  //arcos(x) : cos^-1(x)
        double pi=acos(-1.0);  //or,  //double pi=atan(1.0)*4.0;

        double areaCir=pi*R*R;
        double areaRec=(L*W)-areaCir;
        printf("%.2f %.2f\n", areaCir, areaRec);
    }

    return 0;
}
