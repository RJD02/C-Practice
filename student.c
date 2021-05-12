#include<stdio.h>

struct Student {
	char name[20];
	int roll;
	char address[100];
	int height;
	int weight;
};

typedef struct Student Student;

int main() {
	Student s;
	scanf("%s", s.name);
	scanf("%d", &s.roll);
	scanf("%s", s.address);
	scanf("%d", &s.height);
	scanf("%d", &s.weight);
	printf("The details are:\n");
	printf("Name: %s\n", s.name);
	printf("Roll no.:%d\n", s.roll);
	printf("Address: %s\n", s.address);
	printf("Height: %d\n", s.height);
	printf("Weight: %d\n", s.weight);
	return 0;
}