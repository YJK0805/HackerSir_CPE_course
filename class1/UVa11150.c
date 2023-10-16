#include<stdio.h>
int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		// 將一開始喝掉的設為計算答案的初始值
		int ans = n;
		// 將空瓶數量加 1
		n += 1;
		while(n >= 3){
			// 將答案加上原本的空瓶除以 3（代表換到的可樂）
			ans += n / 3;
			// 下一輪空瓶為喝完的可樂加上一輪的不足換到可樂的空瓶
			n = n / 3 + n % 3;
		}
		printf("%d\n", ans);
	}
	return 0;
}