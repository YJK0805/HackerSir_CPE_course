#include<stdio.h>
#include<string.h>
int main(){
	char s[1001];
	while(scanf("%s",s)){
		int len = strlen(s);
		if(len == 1 && s[0] == '0'){
			break;
		}else{
			int count[2] = {0};
			for(int i = 0;i < len;i++){
				count[i % 2] += (s[i] - '0');
			}
			if((count[0] - count[1]) % 11 == 0){
				printf("%s is a multiple of 11.\n",s);
			}else{
				printf("%s is not a multiple of 11.\n",s);
			}
		}
	}
	return 0;
}