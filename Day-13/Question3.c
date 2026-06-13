//Write a program to find largest and smallest element.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements in array : ") ;
    scanf("%d", &n) ;

    int A[n], i, max, min ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", A[i]) ;
    }

    printf("\n") ;
    max = A[0] ;
    for( i=1; i<n; i++ ){
        if( A[i] > max ){
            max = A[i] ;
        }
    }

    min = A[0] ;
    for( i=1; i<n; i++ ){
        if( A[i] < min ){
            min = A[i] ;
        }
    }

    printf("Largest element = %d\n", max) ;
    printf("Smallest element = %d", min) ;
    return 0 ;



}