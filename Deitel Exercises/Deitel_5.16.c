#include <stdio.h>

unsigned int integerPower(unsigned int base, unsigned int exponent);

int main(void) {
	unsigned int base, exponent;
	printf("%s", "Enter the base and exponent value in integer: ");
	scanf_s("%u%u", &base, &exponent);
	printf("%u\n", integerPower(base, exponent));
}
unsigned int integerPower(unsigned int base, unsigned int exponent) {
	unsigned int result = 1;
	for (int i = 1; i <= exponent; ++i) {

		result *= base;
	}
	return result;
}
