//Write a program to find GCD of two numbers.
#include<stdio.h>
int main(){
    int n1, n2, i, gcd ;
    printf("Enter the two numbers : ") ;
    scanf("%d%d", &n1, &n2 ) ;

    for( i=2; i<=n1 && i<=n2; i++ ){
        if( (n1 % i == 0) && (n2 % i == 0) ){
            gcd = i ;
 
        }
    }

    printf("GCD of %d and %d is %d", n1, n2, gcd) ;
    return 0 ;
}