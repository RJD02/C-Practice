#include<stdio.h>

int main() {
	for(int i = 0; i < 5; i++) {
		char a = 'a';
		for(int j = 5; j > i; j--) {
			printf("%c", a++);
		}
		printf("\n");
	}
	return 0;
}