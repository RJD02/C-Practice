#include<stdio.h>

int fact1(int n) {
	if(n < 0)
		return 1;
	int res = 1;
	while(n) {
		res = res * (n--);
	}
	return res;
}

int fact2(int n) {
	if(n <= 0)
		return 1;
	int res = 1;
	do{
		res = res * (n--);
	}while(n);
	return res;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("Result1 = %d and Result2 = %d", fact1(n), fact2(n));
}