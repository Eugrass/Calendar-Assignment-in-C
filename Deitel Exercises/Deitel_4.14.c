#include <stdio.h>

int main(void) {

	unsigned int number;
	unsigned int factorial = 1;
	for (int number = 1; number <= 5; ++number) {
		factorial *= number;
		printf("%u! factorial is equals to %u\n", number, factorial);

	}
}
