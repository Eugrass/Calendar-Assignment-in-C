#include <stdio.h>

int main(void) {


	printf("%-9s%-10s%-7s%-10s", "Decimal", "Binary", "Octal", "Hexadecimal\n");

		for (int i = 1; i <= 256; i++) {
			unsigned int binary = 0;
			unsigned int number = i;
			unsigned digit = 1;
			printf("%-7d: ", i);

			while (number != 0) {
				unsigned int remainder;
				remainder = number % 2;
				binary += remainder * digit;
				number = number / 2;
				digit *= 10;
			}
			printf("%-9u %-6o %x\n", binary, i, i);

		}
}
