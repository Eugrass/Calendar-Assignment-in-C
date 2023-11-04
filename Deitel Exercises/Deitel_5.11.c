#include <stdio.h>
#include <math.h>

double roundToInteger(float number);
double roundToTenths(float number);
double roundToHundreths(float number);
double roundToThousandths(float number);

int main(void) {

	float number;

	printf("%s", "Enter a number to round: ");
	scanf_s("%f", &number);

	printf("%-13s%-13s%-13s%-13s%-13s\n","NUMBER", "INTEGER", "TENTHS", "HUNDRETHS", "THOUSANDTHS");
	printf("%-13f%-13.4f%-13.4f%-13.4f%-13.4f\n", number, roundToInteger(number), roundToTenths(number),
		roundToHundreths(number), roundToThousandths(number));
}
double roundToInteger(float number) {

	return floor(number + 0.5);
}
double roundToTenths(float number) {

	return floor(number * 10 + 0.5) / 10;
}
double roundToHundreths(float number) {

	return floor(number * 100 + 0.5) / 100;
}
double roundToThousandths(float number) {

	return floor(number * 1000 + 0.5) / 1000;
}
