//Write a program to print hollow square pattern.
#include<stdio.h>
int main(){
    int side, i, j ;
    printf("Enter the side length of sqaure : ") ;
    scanf("%d", &side) ;

    for( i=1; i<=side; i++ ){
        if( i == 1 || i == side ){
            for( j=1; j<=side; j++ ){
                printf("* ") ;
            }
        }
        else{
            for( j=1; j<=side; j++ ){
                if( j == 1 || j == side ){
                    printf("* ") ;
                }
                else{
                    printf("  ") ;
                }

            }
        }
        
        printf("\n") ;
       
   }
   return 0 ;
}