//Write a program to write function for Fibonacci.
#include<stdio.h>
int fib( int n );
int main(){

    int x, i ;
    printf("Enter the number of terms : ");
    scanf("%d", &x);

    for(i=0; i<x; i++){
        printf("%d\n", fib(i));
    }
    return 0;

}

int fib( int n ){
    if( n == 0 ){
        return 0;
    }
    if( n == 1 ){
        return 1;
    }
    int Fib_a = fib( n-1 );
    int Fib_b = fib( n -2 );
    int Fib = Fib_a + Fib_b;
    return Fib ;

}