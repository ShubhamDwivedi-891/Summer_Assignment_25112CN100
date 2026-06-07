//Write a program to Recursive factorial.
#include<stdio.h>
int factorial( int num );
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    
    printf("Factorial = %d", factorial(n));
    return 0;
}

int factorial( int num ){
    if( num == 1 ){
        return 1;
    }
    int fact1 = factorial( num-1 );
    int fact2 = fact1 * num;
    return fact2;
    
}
