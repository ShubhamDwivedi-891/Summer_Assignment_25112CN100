//Write a program to Check Symmetric matrix.
#include<stdio.h>
int main(){
    int A[100][100], r, c, i, j, B[100][100], count = 0 ; 

    printf("Enter the no. of rows and columns : ");
    scanf("%d%d", &r, &c);
    
    for( i=0; i<r; i++ ){
        for( j=0; j<c; j++ ){
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("The given matrix is\n");  
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            B[i][j] = A[j][i];
        }
    }

    printf("The transpose of matrix is\n");
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d  ", B[i][j]);


        }
        printf("\n");
    }

    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            if(B[i][j]==A[i][j]){
                count++ ;
            }
        }
    }

    if(count==r*c){
        printf("Matrix is symmetric");
    }else{
        printf("Matrix is not symmetric");
    }

    return 0 ;
}