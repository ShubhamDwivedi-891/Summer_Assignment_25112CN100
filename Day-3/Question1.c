//Write a program to check whether a number is prime.
#include<stdio.h>
int main(){
    int num, count=0, i ;
    printf("Enter the number : ") ;
    scanf("%d", &num) ;

    for( i=2; i<=(num/2); i++ ){
        if( num % i == 0){
            count ++ ;
        }
    }

    if( count == 0 ){
        printf("Prime number") ;
    }
    else{
        printf("Not a prime number") ;
    }
    return 0 ;
} 
