#include <stdio.h>

int main(void) {

	unsigned int sum = 0;

	for (int i = 2; i <= 30; i += 2) {
		sum += i;
	}
		printf("Sum of the even integers from 2 to 30 is %d\n", sum);
}
