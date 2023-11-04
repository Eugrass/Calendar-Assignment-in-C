#include <stdio.h>

int main(void) {
	unsigned int number;
	unsigned int sum = 0;
	unsigned int counter;
	printf("%s", "Enter the number of values: ");
	scanf_s("%u", &counter);

	for (int i = 1; i <= counter; ++i) {
		printf("%s", "Enter the values: ");
		scanf_s("%u", &number);
		sum += number;
	}
	printf("Sum of the numbers are %d", sum);
}