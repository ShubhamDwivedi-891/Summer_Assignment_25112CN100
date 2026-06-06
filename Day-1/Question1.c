//Write a program to calculate sum of first N natural numbers.
#include <stdio.h>
int main() 
{
    int N, i, sum = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        sum = sum + i ;
    }
    
    printf("The sum of the first %d natural numbers is %d", N, sum);
     return 0;
     
}