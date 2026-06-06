//Write a program to check strong number.
#include<stdio.h>
int main(){
    int num, n,  r, i, fact = 1, sum = 0 ;
    printf("Enter the number : ") ;
    scanf("%d", &num) ;
    
    n = num ;
    while( num != 0 ){
        r = num % 10 ;
        for( i=1; i<=r; i++ ){
            fact = fact * i ;
        }
        sum = sum + fact ;
        num = num / 10 ;
        fact = 1 ;
    }
    if( sum == n ){
        printf("Strong number") ;
    }
    else{
        printf("Not a strong number") ;
    }
    return 0 ;
}