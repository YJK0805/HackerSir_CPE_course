#include<stdio.h>
int main(){
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF){
		printf("%d %d ", a, b);
		if(a > b){
			int t = a;
			a = b;
			b = t;
		}
		int ans = -1;
		for(int i = a;i <= b;i++){
			int n = i,count = 1;
			while(n != 1){
				count++;
				if(n % 2 == 1){
					n = n * 3 + 1;
				}else{
					n = n / 2;
				}
			}
			if(ans < count){
				ans = count;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}