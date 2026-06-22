//Write a program to Subtract matrices.
#include <stdio.h>
int main(){
    int r, c ;

    printf("Enter number of rows and columns : ") ;
    scanf("%d%d", &r, &c) ;

    int A[r][c], B[r][c], C[r][c], i, j ;

    printf("Enter elements of first matrix :\n") ;
    for( i= 0; i<r; i++ ){
        for ( j=0; j<c; j++ ){
            printf("Enter A[%d][%d] : ", i, j) ;
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix :\n") ;
    for( i= 0; i<r; i++ ){
        for ( j=0; j<c; j++ ){
            printf("Enter B[%d][%d] : ", i, j) ;
            scanf("%d", &B[i][j]);
        }
    }

    for ( i=0; i<r; i++ ){
        for ( j=0; j<c; j++ ){
            C[i][j] = A[i][j] - B[i][j] ;
        }
    }

    printf("Difference of matrices :\n") ;
    for( i=0; i<r; i++ ){
        for( j=0; j<c; j++ ){
            printf("%d  ", C[i][j]) ;
        }
        printf("\n");
    }

    return 0 ;
}