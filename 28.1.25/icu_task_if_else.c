#include <stdio.h>

int main() {
    int num, a, b;
    float F, C;

    // Label for re-reading input in case of invalid selection
    read:
    printf("Select a number from 1 to 5\n1. Fahrenheit to Celsius\n2. Addition of two numbers\n3. Subtraction of two numbers\n4. Multiplication of two numbers\n5. Division of two numbers\n");
    scanf("%d", &num);

    // Check the selected option
    if (num == 1) {
        // Fahrenheit to Celsius conversion
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &F);
        C = (F - 32) * 5 / 9;
        printf("The temperature in Celsius is %.2f\n", C);
    }
    else if (num == 2) {
        // Addition of two numbers
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("The sum of the two numbers is %d\n", a + b);
    }
    else if (num == 3) {
        // Subtraction of two numbers
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("The difference of the two numbers is %d\n", a - b);
    }
    else if (num == 4) {
        // Multiplication of two numbers
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("The product of the two numbers is %d\n", a * b);
    }
    else if (num == 5) {
        // Division of two numbers
        again:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        if(b == 0) {
            // Handle division by zero
            printf("Division by zero is not allowed. Please try again.\n");
            goto again;
        }
        printf("The division of the two numbers is %.2f\n", (float)a / b);
    }
    else {
        // Handle invalid input
        printf("Invalid input. Please try again.\n");
        goto read;
    }

    return 0;
}
