/*  Name  : karunesh jadhav 
     UIN : 251C019
    Division : B 
     Roll no. : 16 
     Field : civil */
     #include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

start_menu:
    printf(" Menu Driven Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 5) {
        printf("Exiting the calculator. Goodbye!\n");
        return 0; 
    }

    if (choice >= 1 && choice <= 4) {
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
    }

    
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 4:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
    goto start_menu;
    
    return 0;
}
