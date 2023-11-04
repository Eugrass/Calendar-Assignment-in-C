#include <stdio.h>

int main(void) {
	double approximatePi = 0;
	unsigned int counter = 1;
	for (double i = 1; i > 0; i += 2) {
		if(counter % 2 == 1)
			approximatePi += (4 / i);
		if(counter % 2 == 0)
			approximatePi -= (4 / i);
		if (approximatePi - 3.14 < 1e-6 && 3.14 - approximatePi < 1e-6)
			break;
		counter++;
	}
	printf("Approximate PI number : %f calculated at %dth term of the given series\n", approximatePi, counter);
}

