#include <stdio.h>

int main(void)
{

    unsigned int counter;
    unsigned int smallest;
    unsigned int number;
    printf("%s", "Enter the number of integer values: ");
    scanf_s("%u", &counter);

    printf("%s", "Enter the number: ");
    scanf_s("%u", &number);
    smallest = number;

    for (int i = 1; i < counter; ++i)
    {

        if (number < smallest)
            smallest = number;

        printf("%s","Enter the number: ");
        scanf_s("%u", &number);

    }
    printf("Smallest number is %d", smallest);
}
