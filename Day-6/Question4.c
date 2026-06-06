//Write a program to find x^n without pow().
#include<stdio.h>
int main(){
    int x, n, i, power = 1 ;
    
    printf("Enter the base : ");
    scanf("%d", &x);

    printf("Enter the exponent : ");
    scanf("%d", &n);

    for( i=1; i<=n; i++ ){
        power = power * x ;
    }

    printf("Result = %d", power);
    return 0;



}