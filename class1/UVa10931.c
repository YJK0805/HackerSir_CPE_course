#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)){
		if(n == 0){
			break;
		}else{
			printf("The parity of ");
			// 開一個陣列存放二進位的數字，注意要開大於題目數字範圍
			int bin[35] = {0},i = 0;
			// 根據前面的作法，將數字轉換成二進位，並存放在陣列中
			for(i = 0; n > 0; i++){
				bin[i] = n % 2;
				n /= 2;
			}
			// 開一個變數存放二進位中 1 的個數，記得初始化為 0
			int ans = 0;
			for(i = i - 1; i >= 0; i--){
				printf("%d",bin[i]);
				// 如果二進位位元是 1 就將變數加一
				if(bin[i] == 1){
					ans++;
				}
			}
			printf(" is %d (mod 2).\n",ans);
		}
	}
	return 0;
}