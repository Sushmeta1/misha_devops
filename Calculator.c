#include <stdio.h>     //preprocesor directive to include standard input output header file
#include <math.h>

int main() {
    double num1, num2, result;
    char operator;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /, s for square, r for square root): ");
    scanf(" %c", &operator);
    
    //square of numbers
    
    if (operator == 's') {
        result = num1 * num1;
        printf("The square of %.2lf is: %.2lf\n", num1, result);
    } else if (operator == 'r') {
        if (num1 >= 0) {
            result = sqrt(num1);
            printf("The square root of %.2lf is: %.2lf\n", num1, result);   //square root 
        } else {
            printf("Error! Square root of a negative number is not allowed.\n");
            return 1;
        }
    } else {
        printf("Enter second number: ");
        scanf("%lf", &num2);
    
        switch (operator) {
            case '+':
                result = num1 + num2;      //addition
                break;
            case '-':
                result = num1 - num2;       // subtraction
                break;
            case '*':
                result = num1 * num2;       //multiplication
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;    //division
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                    return 1;
                }
                break;
            default:
                printf("Invalid operator!\n");   //default
                return 1;
        }
        
        printf("The result is: %.2lf\n", result);  //result
    }
    return 0;
}
