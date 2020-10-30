#include <stdio.h>

int factorial(int n){
	int num = 1;
	for(int i = 1; i <= n; i++){
		num = num*i;
	}

	return num;
}

int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int ans = factorial(n);
	printf("n! = %d\n", ans);
	return 0;
}
