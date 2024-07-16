#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	printf("Lumberjacks:\n");
	
	while(t--){
		int arr[10];
		scanf("%d", &arr[0]);
		
		for(int i=1; i<10; i++){
			scanf("%d", &arr[i]);
		}
		
		bool ascending=true;
		bool descending=true;
		
		for(int i=1; i<10; i++){ //loop for ascending
			if(arr[i]<arr[i-1]){  
				ascending=false;
				break;
			}
		}
		
		for(int i=1; i<10; i++){  //loop for descending
			if(arr[i]>arr[i-1]){  
				descending=false;
				break;
			}
		}
			
		if(!ascending && !descending){
			printf("Unordered\n");
		}
		else{
			printf("Ordered\n");
		}
	}
	
	return 0;
}