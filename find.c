#include<stdio.h>

int a[100];

void fact(int n) {
	int f = 1;
	for(int i = 2; i <= n; i++) {
		f = f * i;
	}
	printf("%d\n", f);
}

void table(int n) {
	for(int i = 1; i < 11; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
}

int main() {
	// memset(a, 0, sizeof(a));
	int n;
	int ch;
	scanf("%d", &n);
	printf("1.Find factorial\n2.Display table\n");
	printf("Enter your choice here: ");
	scanf("%d", &ch);
	if(ch == 1) {
		fact(n);
	} else {
		table(n);
	}
	return 0;
}