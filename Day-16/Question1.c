//Write a program to find missing number in array.
#include<stdio.h>
int main(){
    int n, i ;
   
    printf("Enter the value of n : ") ;
    scanf("%d", &n) ;

    int A[n], sum = 0, total, missing ;

    for( i=0; i<n-1; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
        sum = sum + A[i] ;
    }
    
    total = n * (n + 1) / 2;
    missing = total - sum;

    printf("Missing number = %d\n", missing);
    return 0;
}