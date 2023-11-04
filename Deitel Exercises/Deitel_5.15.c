#include <stdio.h>
#include <math.h>


double hypotenuse(double side1, double side2);
int main(void) {

	double side1;
	double side2;
	printf("%s", "Enter the side of triangles : ");
	scanf_s("%lf%lf", &side1, &side2);
	printf("Hypotenuse is %.2f\n", hypotenuse(side1, side2));
}

double hypotenuse(double side1, double side2) {

	return sqrt(side1 * side1 + side2 * side2);
}
