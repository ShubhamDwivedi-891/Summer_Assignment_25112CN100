//Write a program to Find column-wise sum.
#include <stdio.h>
int main(){
    int r, c, i, j, sum = 0 ;

    printf("Enter number of rows and columns : ") ; 
    scanf("%d %d", &r, &c) ;

    int A[r][c] ;
    for( i=0; i<r; i++ ){
        for( j=0; j<c; j++ ){
            printf("Enter A[%d][%d] : ", i, j) ;
            scanf("%d", &A[i][j]) ;
        }
    }

    printf("Column-wise sum :\n") ;
    for ( j=0; j<c; j++ ){
        sum = 0 ;
        for( i=0; i<r; i++ ){
            sum = sum + A[i][j] ;
        }
        printf("Sum of column %d = %d\n", j + 1, sum) ;
    }

    return 0 ;
}
