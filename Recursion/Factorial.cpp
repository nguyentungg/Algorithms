// C Implementation
#include<stdio.h>

int findFactorialIterative(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int findFactorialRecursive(int n) {
    if (n == 1) {
        return 1;
    }
    return n * findFactorialRecursive(n - 1);
}

int main() {
    static int factorial;
    
    factorial = findFactorialIterative(5);
    printf("Factorial of 5 is %d\n", factorial);
    factorial = findFactorialRecursive(5);
    printf("Factorial of 5 is %d\n", factorial);
    return 0;
}