#include <stdio.h>

int binomial_recursive(int n, int k){
	if(k == 0){
		return 1;
	}
	if(k == n){
		return 1;
	}
	return binomial_recursive(n-1, k-1) + binomial_recursive(n-1, k);
}

int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int k;
	printf("k = ");
	scanf("%d", &k);
	int ans = binomial_recursive(n, k);
	printf("ans = %d\n", ans);
	return 0;
}
