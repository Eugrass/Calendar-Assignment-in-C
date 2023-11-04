#include <stdio.h>

int multiple(unsigned int number1, unsigned int number2);

int main(void) {
	unsigned int number1, number2;
	printf("%s", "Enter two integers : ");
	scanf_s("%u%u", &number1, &number2);
	if (multiple(number1, number2))
		printf("Second number is multiple of first number.\n");
}
int multiple(unsigned int number1, unsigned int number2) {

	if ((number2 % number1) == 0)
		return 1;
	else
		return 0;
}
