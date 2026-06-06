//Write a program to generate Fibonacci series.
#include<stdio.h>
int main(){
    int n, i, first_term = 0, second_term = 1, next_term ;

    printf("Enter the number of elemens in series : ") ;
    scanf("%d", &n) ;

    printf("%d\n", first_term) ;
    printf("%d\n", second_term) ;

    for( i=1; i<=(n-2); i++ ){
        next_term = first_term + second_term ;
        printf("%d\n", next_term) ;
        first_term = second_term ;
        second_term = next_term ;
    }

    return 0 ;
}