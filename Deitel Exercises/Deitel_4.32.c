#include <stdio.h>

int main(void) {
	int range;
	printf("%s", "Enter an odd number in the range 1 to 19 for diamond: ");
	scanf_s("%u", &range);

	for (int i = 1; i <= range; i += 2) {

		for (int k = range; k > i; k -= 2) {
			printf(" ");
		}
		for (int j = 1; j <= i; ++j) {
			printf("%s", "*");
		}
		for (int k = range; k > i; k -= 2) {
			printf(" ");
		}
		puts("");
	}
	for(int i = 1; i <= (range - 2); i += 2){

		for (int k = 1; k <= i; k += 2) {
			printf(" ");
		}
		for (int j = (range - 2); j >= i; --j) {
			printf("%s", "*");
		}
		for (int k = 1; k <= i; k += 2) {
			printf(" ");
		}
		puts("");
	}
}
