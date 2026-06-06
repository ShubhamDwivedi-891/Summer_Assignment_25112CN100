//Write a program to find nth Fibonacci term.
#include<stdio.h>
int main(){
    int n, first_term = 0, second_term = 1, next_term, i ;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    if( n == 1 ){
        printf("%d", first_term);
    }else if( n == 2 ){
        printf("%d", second_term);
    }else{
        for( i=3; i<=n; i++ ){
            next_term = first_term + second_term ;
            first_term = second_term ;
            second_term = next_term ;
        }
        printf("%d", next_term);
    }
}