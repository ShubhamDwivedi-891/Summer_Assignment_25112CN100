//Write a program to Reverse array.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter size of array : ") ;
    scanf("%d", &n) ;

    int B[n], i, j, temp ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    printf("\n") ;

    i = 0 ;
    j = n-1 ;
    if( n % 2 != 0 ){
        while( i != j ){
            temp = B[i] ;
            B[i] = B[j] ;
            B[j] = temp ;
            i++ ;
            j-- ;

        }
    }else{
        i = 0 ;
        j = n-1 ;
        while( (i < n/2) && (j >= n/2) ){
            temp = B[i] ;
            B[i] = B[j] ;
            B[j] = temp ;
            i++ ;
            j-- ;
        }
    }

    printf("Reverse of array is : \n") ;
    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    return 0 ;
}