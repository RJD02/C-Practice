#include<stdio.h>

#define debug(c, n) printf("%s %d\n", (char*)c, (int)n)

int strlen(char str[]) {
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++)
		count++;
	// printf("Length of string is: %d\n", count);
	return count;
}

void strcat(char str1[]) {
	char str2[100], str3[200];
	printf("Enter string to append: ");
	scanf("%s", str2);
	for(int i = 0; i < strlen(str1); i++) {
		str3[i] = str1[i];
	}
	for(int i = 0; i < strlen(str2); i++) {
		str3[i + strlen(str1)] = str2[i];
	}
	printf("The concatenated string is: %s\n", str3);
}

void strcpy(char *str) {
	char str2[100];
	int i;
	printf("Enter a string to copy: ");
	scanf("%s", str2);
	for(i = 0; i < strlen(str2); i++) {
		str[i] = str2[i];
	}
	str[i] = '\0';
	printf("%s\n", str);
}

int strcmp(char str[]) {
	char str2[100];
	printf("Enter a string to compare: ");
	scanf("%s", str2);
	if(strlen(str) < strlen(str2))
		return -1;
	if(strlen(str) == strlen(str2))
		return 0;
	if(strlen(str) > strlen(str2))
		return 1;
}

int main() {
	char str[100];
	int ch;
	int count;
	debug("Inside main", 1);
	printf("Enter a string: ");
	scanf("%s", str);
	printf("Enter a choice from following options: \n");
	printf("1.strlen\n2.strcat\n3.strcpy\n4.strcmp\n");
	printf("Enter your choice here: ");
	scanf(" %d", &ch);
	switch (ch) {
		case 1:
			count = strlen(str);
			printf("The length of the string is: %d\n", count);
			break;
		case 2:
			strcat(str);
			break;
		case 3:
			strcpy(str);
			break;
		case 4:
			count = strcmp(str);
			printf("%d\n", count);
			break;
		default:
			printf("Watch it\n");
	}
	return 0;
}