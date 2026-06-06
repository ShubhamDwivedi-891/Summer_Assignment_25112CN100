//Write a program to find factorial of a number.
#include <stdio.h>
int main()
{
    int n, i, factorial = 1;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}