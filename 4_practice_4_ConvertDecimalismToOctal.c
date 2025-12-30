/* Input decimalism and output octal representation */

#include <stdio.h>

int main() 
{
    int decimalNumber;
    int octalNumber[32]; // Array to hold octal digits
    int index = 0;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to octal
    if (decimalNumber == 0) {
        octalNumber[index++] = 0;
    } else {
        while (decimalNumber > 0) {
            octalNumber[index++] = decimalNumber % 8;
            decimalNumber /= 8;
        }
    }

    // Output octal representation
    printf("Octal representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octalNumber[i]);
    }
    printf("\n");

    return 0;
}