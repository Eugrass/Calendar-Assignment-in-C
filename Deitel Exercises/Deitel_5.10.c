#include <stdio.h>
#include <math.h>

int main(void) {

	float number;

	printf("%s", "Enter a number to round: ");
	scanf_s("%f", &number);

	printf("The number you entered is : %.4f and the rounded number is : %.1f\n", number, floor(number + 0.5));
}
