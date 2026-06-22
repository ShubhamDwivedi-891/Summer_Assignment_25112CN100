//Write a program to sort array in descending order.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements in array : ") ;
    scanf("%d", &n) ;

    int A[n], i, j, temp ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    for ( i=0; i<n-1; i++ ){
        for ( j=i+1; j<n; j++ ){
            if( A[i] < A[j] ){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    printf("Array in descending order : ") ;
    for( i=0; i<n; i++ ){
        printf("%d  ", A[i]) ;
    }

    return 0 ;
}