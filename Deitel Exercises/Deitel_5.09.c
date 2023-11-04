#include <stdio.h>
#include <math.h>

double calculateCharges(float hour);
int main(void) {
	float customer1, customer2, customer3;
	printf("%s","Enter the hours for 3 customer (cannot be more than 24 hours): ");
	scanf_s("%f %f %f", &customer1, &customer2, &customer3);

	if (customer1 > 24 || customer2 > 24 || customer3 > 24)
		printf("No car parks longer than 24 hours");
	else {

		printf("\n%-10s%-10s%-10s\n", "Car", "Hours", "Charge");
		printf("1         %-10.1f%-10.2f\n", customer1, calculateCharges(customer1));
		printf("2         %-10.1f%-10.2f\n", customer2, calculateCharges(customer2));
		printf("3         %-10.1f%-10.2f\n", customer3, calculateCharges(customer3));
		float totalHour = customer1 + customer2 + customer3;
		double totalCharge = calculateCharges(customer1) + calculateCharges(customer2) + calculateCharges(customer3);
		printf("TOTAL     %-10.1f%-10.2f\n", totalHour, totalCharge);
	}
}

double calculateCharges(float hour) {
	double charge;
	if (hour <= 3)
		charge = 2.00;
	else if (hour < 19)
		charge = 2.00 + 0.50 * ceil((hour - 3));
	else
		charge = 10.00;

	return charge;
}
