#include<stdio.h>
int main(){
	int n;
	while(scanf("%d", &n) != EOF){
		int ans = n;
		n += 1;
		while(n >= 3){
			ans += n / 3;
			n = n / 3 + n % 3;
		}
		printf("%d\n", ans);
	}
	return 0;
}