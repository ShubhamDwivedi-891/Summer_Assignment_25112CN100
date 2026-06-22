//Write a program to remove duplicates from array.
#include <stdio.h>
int main(){
    int n ;
    printf("Enter the value of n : ") ;
    scanf("%d", &n) ;

    int A[n], i, j, k ;

    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }
    
    for( i=0; i<n; i++ ){
        for( j=i+1; j<n; j++ ){
            if( A[i] == A[j] ){
                for( k=j; k<n-1; k++) {
                    A[k] = A[k + 1];
                }
                n-- ;
                j-- ; 
            }
        }
    }

    printf("Array after removing duplicates :\n");
    for( i=0; i<n; i++ ){
        printf("%d  ", A[i]);
    }

    return 0;
}