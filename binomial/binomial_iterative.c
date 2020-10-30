#include <stdio.h>

int binomial_iterative(int n, int k){
	int B[n+1][k+1];

	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i && j <= k; j++){
			if(j == 0 || j == i){
				B[i][j] = 1;
			}else{
				B[i][j] = B[i-1][j-1] + B[i-1][j];
			}
		}
	}
	return B[n][k];
}

int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int k;
	printf("k = ");
	scanf("%d", &k);
	int ans = binomial_iterative(n, k);
	printf("ans = %d\n", ans);
	return 0;
}
