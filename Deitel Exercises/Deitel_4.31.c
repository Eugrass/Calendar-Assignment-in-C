#include <stdio.h>

int main(void) {

	for (int i = 1; i <= 9; i += 2) {

		for (int k = 9; k > i; k -= 2) {
			printf(" ");
		}
		for (int j = 1; j <= i; ++j) {
			printf("%s", "*");
		}
		for (int k = 9; k > i; k -= 2) {
			printf(" ");
		}
		puts("");
	}
	for(int i = 1; i <= 7; i += 2){

		for (int k = 1; k <= i; k += 2) {
			printf(" ");
		}
		for (int j = 7; j >= i; --j) {
			printf("%s", "*");
		}
		for (int k = 1; k <= i; k += 2) {
			printf(" ");
		}
		puts("");
	}
}

