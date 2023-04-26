// So this is simple but first project in C language
#include <stdio.h>

int add(int first_arg, int second_arg);
int subtract(int first_arg, int second_arg);
int multiply(int first_arg, int second_arg);
int divide(int first_arg, int second_arg);

int calculator(int first_arg, int second_arg, char operator) {
    // So this fun will take 2 args and will perform actions accordingly

    //checking the operation from the arg
    if (operator == '+') {
        add(first_arg, second_arg);
    } else if (operator == '-')
    {
        subtract(first_arg, second_arg);
    } else if (operator == '*') {
        multiply(first_arg, second_arg);
    } else if (operator == '/') {
        divide(first_arg, second_arg);
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

    int a = calculator(4, 7, '*');
    printf("%d", a);

    return 0;
}