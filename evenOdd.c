#include<stdio.h>

int main() {
	int in;
	printf("Enter a number\n");
	scanf("%d", &in);
	if(in % 2)
		printf("The number is odd\n");
	else
		printf("The number is even\n");
	return 0;
}