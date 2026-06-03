//Write a program to print prime numbers in a range.
#include<stdio.h>
int main(){
    int n1, n2, i, j, count = 0 ;
    printf("Enter the starting and ending element of range : ") ;
    scanf("%d%d", &n1, &n2 ) ;

    for( i=n1; i<=n2; i++ ){
        for( j=2; j<=(i/2); j++){
            if( i % j == 0 ){
                count ++ ;
            }
        }
        
        if( count == 0 ){
            printf("%d ", i) ;
        }

        count = 0 ;
    
    }
    return 0 ;
    
}