//Write a program to count digits in a number.
#include<stdio.h>
int main()
{
    int n, count = 0;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    while (n != 0) {
        n = n / 10;
        count++;
    }
    
    printf("The number of digits in the given number is %d", count);
    return 0;
}