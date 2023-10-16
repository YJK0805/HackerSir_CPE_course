#include<stdio.h>
#include<string.h>
int main(){
	char s[1001];
	while(scanf("%s",s)){
		// 取得字串長度
		int len = strlen(s);
		// 如果輸入為 0 會直接跳出迴圈
		if(len == 1 && s[0] == '0'){
			break;
		}else{
			// 宣告陣列，一開始初始化為 0
			int count[2] = {0};
			// 透過 i % 2 會讓 index = 0 or 1 正好可以存放奇偶數位 
			for(int i = 0;i < len;i++){
				count[i % 2] += (s[i] - '0');
			}
			// 判斷奇偶數位相減是否為 11 倍數
			if((count[0] - count[1]) % 11 == 0){
				printf("%s is a multiple of 11.\n",s);
			}else{
				printf("%s is not a multiple of 11.\n",s);
			}
		}
	}
	return 0;
}