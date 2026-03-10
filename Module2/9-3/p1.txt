#include <stdio.h>

int factorial(int n) 
{
    // Base case: stops the recursion
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
     {
        // Recursive case: calls itself with a smaller input
        return n * factorial(n - 1);
     }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
