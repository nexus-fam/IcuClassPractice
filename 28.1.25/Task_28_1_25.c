#include <stdio.h>

int main() {
    int choice;

    // Prompted options and take input
    printf("1. Fahrenheit to Celsius\n2. add two numbers\n3. subtract two numbers\n4. multiply two numbers\n5. divide two numbers\n");
    scanf("%d", &choice);

/* used switch-case for every option and cases has been enclosed in a brace,
    so the declarations can be executed */
    switch (choice) {
        case 1: {
        float F, C;
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &F);
        C = (F - 32) * 5 / 9;
        printf("The temperature in Celsius is: %.2f\n", C);
            break;
        }
        case 2:{
            int a, b, sum;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            sum = a + b;
            printf("The sum of the two numbers is: %d\n", sum);
            break;
        }
        case 3: {
            int x, y, diff;
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            diff = x - y;
            printf("The difference of the two numbers is: %d\n", diff);
            break;
        }
        case 4: {
            int m, n, product;
            printf("Enter two numbers: ");
            scanf("%d %d", &m, &n);
            product = m * n;
            printf("The product of the two numbers is: %d\n", product);
            break;
        }
        case 5: { // used label and goto statement to loop if denominator is 0
            int p, q;
            float quotient;
            read :
            printf("Enter two numbers: ");
            scanf("%d %d", &p, &q);
            if(q == 0){
                printf("Division by zero is not possible.\n");
                goto read;
            }
            quotient = (float)p / q;
            printf("The quotient of the two numbers is: %.2f\n", quotient);
            break;
        }
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
            break;
    }

    return 0;
}
