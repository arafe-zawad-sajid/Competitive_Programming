//J
#include <bits/stdc++.h>
using namespace std;

vector<long long int> v;
int sz=0;

void push_sorted(long long int x){
    int start_index=0;
    int end_index=sz-1;

	while(start_index<=end_index){
		int r=start_index+end_index;
		int m=r/2;

        if(x>v[m]){
            start_index=m+1;
        }
        else if(x<v[m]){
            end_index=m-1;
        }
        else{
        	start_index=m;
        	break;
        }

	}
//use start_index
    vector<long long int>::iterator it;
    it=v.begin();
    v.insert(it+start_index, x);
	sz++;
}

int main() {
	long long int temp;

	while(scanf("%lld" ,&temp)!=EOF){
        if(sz==0){
            v.push_back(temp);
            sz++;
        }
        else{
            push_sorted(temp);
        }

        int mid=sz/2;

		if(sz%2==0){  //even
			printf("%lld\n", (v[mid]+v[mid-1])/2);
		}
		else{  //odd
			printf("%lld\n", v[mid]);
		}



	}

	return 0;
}
