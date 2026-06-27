//Write a program to merge two sorted arrays.
#include<stdio.h>
int main(){
    int A[100], B[100], C[200] ;
    int n1, n2, i, j, temp ;

    printf("Enter size of first array : ") ;
    scanf("%d", &n1) ;

    for( i = 0; i < n1; i++ )
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;

    printf("Enter size of second array: ") ;
    scanf("%d", &n2) ;

    for( i = 0; i < n2; i++ )
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;

    for( i = 0; i < n1; i++ ){
        C[i] = A[i];
    }

    for( i = 0; i < n2; i++ ){
        C[n1 + i] = B[i] ; 
    } 

    for( i = 0; i < n1 + n2; i++ ){
        for( j = i + 1; j < n1 + n2; j++ ){
            if( C[i] > C[j] ){
                temp = C[i] ;
                C[i] = C[j] ;
                C[j] = temp ;
            }
        }
    }

    printf("Merged array\n") ;
    for( i = 0; i < n1 + n2; i++ ){
        printf("%d ", C[i]);
    }

    return 0;
}