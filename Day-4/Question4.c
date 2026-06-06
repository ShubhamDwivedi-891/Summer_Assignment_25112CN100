//Write a program to print Armstrong numbers in a range.
#include<stdio.h>
#include<math.h>
int main(){
    int n1, n2, n3, i, count = 0, sum = 0, r ;
    printf("Enter the starting and ending element of range : ");
    scanf("%d%d", &n2, &n3);

    for( i=n2; i<=n3; i++ ){
        n1 = i ;
        while( i != 0 ){
            i = i / 10 ;
            count ++ ;
        }
        
        i = n1 ;
        while( i != 0 ){
            r = i % 10 ;
            sum = sum + pow(r, count) ;
            i = i / 10 ;
        }
        
        if( sum == n1 ){
            printf("%d\n", n1) ;
        }
        
        i = n1 ;
        count = 0 ;
        sum = 0 ;
        
    }

    return 0 ;

}
    