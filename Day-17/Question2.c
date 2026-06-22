//Write a program to union of arrays.
#include <stdio.h>
int main(){
    int n1, n2 ;

    printf("Enter the number of elements in first array : ") ;
    scanf("%d", &n1);

    int A[n1], i, j, found ;

    for( i=0; i<n1; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    printf("Enter the number of elements in second array : ") ;
    scanf("%d", &n2);
    
    int B[n2] ;
    for( i=0; i<n2; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    printf("Union of arrays : ");
    for ( i=0; i<n1; i++ ){
        printf("%d  ", A[i]);
    }

    for ( i=0; i<n2; i++ ){
        found = 0 ;
        for ( j=0; j<n1; j++ ){
            if ( B[i] == A[j] ){
                found = 1;
                break;
            }
        }

        if ( found == 0 ){
            printf("%d  ", B[i]) ;
        }
    }

    return 0;
}