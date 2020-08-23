#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main2() {
	int a, b, i;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	if (a > b) {
		i = b;
	}
	else if (b > a) {
		i = a;
	}
	else {}
	if (a != b) {
		while (a % i != 0 || b % i != 0) {
			i = i - 1;
		}
		printf("Greatest common divisor = %d", i);
	}
	else {
		printf("Greatest common divisor = 1");
	}




	return 0;
}