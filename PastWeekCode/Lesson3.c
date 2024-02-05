#include <stdio.h>

int main() {
	int var;
	int var2;
	int sum;
	

	printf("Enter first number: \n");
	scanf("%d", &var);

	printf("\nEnter second number: \n");
	scanf("%d", &var2);

	sum = var + var2;

	printf("\nThe sum of your two numbers is %d", sum);

	return 0;
}