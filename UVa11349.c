#include<stdio.h>
#include<stdbool.h>
int main(){
	int t;
	scanf("%d", &t);
	for(int cases = 1;cases <= t;cases++){
		int n;
		scanf("\nN = %d", &n);
		int arr[n * n];
		for(int i = 0;i < n * n;i++){
			scanf("%d", &arr[i]);
		}
		bool check = true;
		for(int i = 0,j = n * n - 1;i < n * n;i++,j--){
			if(arr[i] != arr[j]){
				check = false;
				break;
			}
		}
		if(check){
			printf("Test #%d: Symmetric.\n", cases);
		}else{
			printf("Test #%d: Non-symmetric.\n", cases);
		}
	}
	return 0;
}