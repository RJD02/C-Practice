#include<stdio.h>

#define size 3

int main() {
	int m1[size][size];
	int m2[size][size];
	for(int i = 0; i <size; i++)
		for(int j = 0; j < size; j++)
			scanf("%d", &m1[i][j]);
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++)
			scanf("%d", &m2[i][j]);
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			printf("%d ", m1[i][j] * m2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
