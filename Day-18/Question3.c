//Write a program to Binary Search.
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of elements in array: ") ;
    scanf("%d", &n) ;
    
    int A[n], i, key, mid, beg, end, found = 0 ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    printf("Enter the searching element : ");
    scanf("%d", &key);
    
    beg = 0 ;
    end = n-1 ;
    
    while( beg <= end ){
        mid = ( beg + end ) / 2 ;
        if( A[mid] == key ){
            printf("Element %d found at %d index value", key, mid) ;
            found = 1 ;
            break ;
        }else if( A[mid] > key ){
            end = mid-1 ;
        }else{
            beg = mid +1 ;
            
        }

    }
    if( (beg > end) && (found ==0) ){
        printf("Element not found") ;
    }
    return 0;
}
