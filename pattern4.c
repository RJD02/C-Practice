#include<stdio.h>
#include<stdlib.h>

int main() {
	for(int i = 0; i < 5; i++) {
		int count = 1;
		for(int j = 5; j > i; j--) {
			printf("%d ", count++);
		}
		printf("\n");
	}
	return 0;
}