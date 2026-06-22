//Write a program to Find diagonal sum.
#include<stdio.h>
int main(){
    int n ;

    printf("Enter the no. of rows and columns : ");
    scanf("%d", &n) ;
    
    int A[n][n], i, j, sum = 0 ;
    for( i=0; i<n; i++ ){
        for( j=0; j<n; j++ ){
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("The given matrix is\n");  
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    for ( i=0; i<n; i++ ){
        sum = sum + A[i][i] ;
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
