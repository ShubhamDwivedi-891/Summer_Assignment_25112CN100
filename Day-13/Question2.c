//Write a program to find sum and average of array.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements in array : ") ;
    scanf("%d", &n) ;

    int A[n], i, sum = 0 ;
    float avg ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    for( i=0; i<n; i++ ){
        sum = sum + A[i] ;
    }

    avg = sum / n ;
    printf("Sum = %d\n", sum) ;
    printf("Average = %.2f", avg) ;
    return 0 ;
}