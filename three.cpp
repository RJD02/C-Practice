#include<bits/stdc++.h>

int main() {
	int a[3];
	for(int i = 0; i < 3; i++) 
		scanf("%d", &a[i]);
	std::sort(a, a + 3);
	printf("Biggest = %d\nSmallest = %d", a[2], a[0]);
	return 0;
}