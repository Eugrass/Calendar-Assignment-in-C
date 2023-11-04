#include <stdio.h>

int main(void) {

	for (int hypotenuse = 1; hypotenuse <= 500; ++hypotenuse) {
		for (int side1 = 1; side1 <= 500; ++side1) {
			for (int side2 = 1; side2 <= 500; ++side2) {
				if ((hypotenuse * hypotenuse) == (side1 * side1 + side2 * side2))
					printf("First side is %-3d Second side is %-3d and the Hypotenuse is %-3d\n", side1, side2, hypotenuse);
			}
		}
	}


}
