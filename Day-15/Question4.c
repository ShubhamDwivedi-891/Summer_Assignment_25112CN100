//Write a program to Move zeroes to end.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter size of array : ") ;
    scanf("%d", &n) ;

    int B[n], i, j = 0 ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    printf("\n") ;

    for(i = 0; i < n; i++) {
        if( B[i] != 0 ){
            B[j] = B[i];
            j++ ;
        }
    }

    while(j < n) {
        B[j] = 0 ;
        j++ ;
    }

    printf("New array after moving zeroes to end :\n") ;
    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    return 0 ;
}