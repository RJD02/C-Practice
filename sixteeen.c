#include<stdio.h>

int main() {
	for(int i = 0; i < 5; i++) {
		char a = 'A';
		for(int j = 0; j <= i; j++) {
			printf("%c ", a);
			a++;
		}
		printf("\n");
	}
	return 0;
}