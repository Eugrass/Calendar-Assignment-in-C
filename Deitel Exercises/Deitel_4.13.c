#include <stdio.h>

int main(void) {

	unsigned int sum = 0;

	for (int i = 1; i <= 15; i += 2) {
		sum += i;
	}
		printf("Sum of the odd integers from 1 to 15 is %d\n", sum);
}
