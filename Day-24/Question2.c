//Write a program to compress a string.
#include <stdio.h>
int main(){
    char string[100] ;
    int i = 0, count ;

    printf("Enter a string : ") ;
    scanf("%[^\n]", string) ;

    while( string[i] != '\0' ){
        count = 1 ;

        while( string[i] == string[i + 1] ){
            count++ ;
            i++ ; 
        }

        printf("%c%d", string[i], count) ;
        i++ ;
    }

    return 0;
}