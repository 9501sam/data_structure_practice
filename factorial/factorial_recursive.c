#include <stdio.h>

int factorial(int n){
	int f = 1;
	if(n == 0){
		return 1;
	}

	return factorial(n-1)*n;
}

int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int ans = factorial(n);
	printf("n! = %d\n", ans);
	return 0;
}
