//Write a program to Linear search.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter size of array : ") ;
    scanf("%d", &n) ;

    int B[n], i, search, pos = -1 ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    printf("\n") ;

    printf("Enter the searching element : ") ;
    scanf("%d", &search) ;
    
    for( i=0; i<n; i++ ){
        if( search == B[i] ){
            pos = i ;
            break ;
        }
    }

    if( pos == -1 ){
       printf("Element not found") ;
    }else{
       printf("Element found at index value = %d", pos) ;
    }
    return 0 ;
}
