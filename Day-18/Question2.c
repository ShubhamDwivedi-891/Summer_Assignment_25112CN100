//Write a program to Selection Sort.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements in array : ") ;
    scanf("%d", &n) ;

    int A[n], i, j, min, temp ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    for( i=0; i<n-1; i++ ){
        min = i ;
        for( j=i+1; j<n; j++ ){
            if( A[j] < A[min] ){
                min = j ;
            }
        }

        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    printf("Sorted array: ") ;
    for ( i=0; i<n; i++ ){
        printf("%d  ", A[i]) ;
    }

    return 0 ;
}