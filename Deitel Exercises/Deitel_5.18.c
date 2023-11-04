#include <stdio.h>

int evenOrOdd(unsigned int number);

int main(void) {
	unsigned int number;
	printf("%s", "Enter an integer : ");
	scanf_s("%u", &number);
	if (evenOrOdd(number))
		printf("Number is even.\n");
	else
		printf("Number is odd.\n");
}
int evenOrOdd(unsigned int number) {

	if ((number % 2) == 0)
		return 1;
	else
		return 0;
}
