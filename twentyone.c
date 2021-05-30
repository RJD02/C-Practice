#include<stdio.h>

int numOfDigits(int n) {
	int count = 0;
	while(n) {
		count++;
		n /= 10;
	}
	return count;
}

int sumOfDigits(int n) {
	int res = 0;
	while(n) {
		res += n % 10;
		n /= 10;
	}
	return res;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("Number of digits = %d and sum of digits = %d", numOfDigits(n), sumOfDigits(n));
	return 0;
}