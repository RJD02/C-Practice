#include<stdio.h>
#include<stdlib.h>
int sub(int a, int b) {
	return abs(a - b);
}

int add(int a, int b) {
	return a + b;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Subtraction = %d\n", sub(a, b));
	printf("Addition = %d\n", add(a, b));
	return 0;
}