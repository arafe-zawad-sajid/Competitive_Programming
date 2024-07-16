#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	
	while(t--){
		int n;
		scanf("%d", &n);
		
		double sum=0;
		int arr[n];
		
		for(int i=0; i<n; i++){
			scanf("%d", &arr[i]);
			sum=sum+arr[i];
		}
		
		double avg=sum/n;
		int aboveAvg=0;
		
		for(int i=0; i<n; i++){
			if(arr[i]>avg){
				aboveAvg++;
			}
		}
		
		double result;
		result=((double)aboveAvg/(double)n)*100;
		printf("%.3f%\n" , result);
	}
	
	return 0;
}