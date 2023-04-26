#include <stdio.h>

int add(int first_arg, int second_arg);
int subtract(int first_arg, int second_arg);
int multiply(int first_arg, int second_arg);
int divide(int first_arg, int second_arg);

int calculator(int first_arg, int second_arg, char operator) {
    // So this fun will take 2 args and will perform actions accordingly

    //checking the operation from the arg
    if (operator == '+') {
        return add(first_arg, second_arg);
    } else if (operator == '-')
    {
        return subtract(first_arg, second_arg);
    } else if (operator == '*') {
        return multiply(first_arg, second_arg);
    } else if (operator == '/') {
        return divide(first_arg, second_arg);
    } else {
        return 0;
    }
    
}

int add(int first_arg, int second_arg) {
    return first_arg + second_arg;
}

int subtract(int first_arg, int second_arg) {
    return first_arg - second_arg;
}

int multiply(int first_arg, int second_arg) {
    return first_arg * second_arg;
}

int divide(int first_arg, int second_arg) {
    return first_arg / second_arg;
}

int main() {

    int first_arg;
    int second_arg;
    char operator;

    printf("Please Enter The First Number: ");
    scanf("%d", &first_arg);

    printf("Please Enter the Second Number: ");
    scanf("%d", &second_arg);

    printf("Please Enter The Operation: ");
    scanf(" %c", &operator);

    int result = calculator(first_arg, second_arg, operator);

    printf("The Result is %d %c %d = %d", first_arg, operator, second_arg, result);


    return 0;
}
