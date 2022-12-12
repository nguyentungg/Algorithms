// C Implementation
#include<stdio.h>

int findFibonacciIterative(int n) {
    int fibo_n_previous = 1;
    int fibo_n_previous_previous = 0;
    int fibo = 0;
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    for (int i = 2; i <= n; i++) {
        fibo = fibo_n_previous + fibo_n_previous_previous;
        // Update fibo_n_previous_previous and fibo_n_previous	
        fibo_n_previous_previous = fibo_n_previous;
        fibo_n_previous = fibo;
    }
    return fibo;
}

int findFibonacciRecursive(int n) {
    /* Base case */
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    /* Recursive case */
    else {
        return findFibonacciRecursive(n - 1) + findFibonacciRecursive(n - 2);
    }
}

void main () {
    static int fibo;
    fibo = findFibonacciIterative(5);
    printf("Fibonacci of 5 is %d\n", fibo);
    fibo = findFibonacciIterative(1);
    printf("Fibonacci of 1 is %d\n", fibo);
    fibo = findFibonacciIterative(0);
    printf("Fibonacci of 0 is %d\n", fibo);
    fibo = findFibonacciIterative(7);
    printf("Fibonacci of 7 is %d\n", fibo);
    fibo = findFibonacciRecursive(5);
    printf("Fibonacci of 5 is %d\n", fibo);
    fibo = findFibonacciRecursive(1);
    printf("Fibonacci of 1 is %d\n", fibo);
    fibo = findFibonacciRecursive(0);
    printf("Fibonacci of 0 is %d\n", fibo);
    fibo = findFibonacciRecursive(7);
    printf("Fibonacci of 7 is %d\n", fibo);
}