#include<stdio.h>

void isPrime(int n) {
	for(int i = 2; i < n; i++) {
		if(n % i == 0) {
			printf("Composite\n");
			return;
		}
	}
	printf("Prime\n");
}

int main() {
	int n;
	scanf("%d", &n);
	isPrime(n);
	return 0;
}