//Write a program to remove spaces from string.
#include <stdio.h>
int main() {
    char string[100] ;
    int i, j = 0 ;

    printf("Enter a string : ");
    scanf("%[^\n]", string) ;

    for( i = 0; string[i] != '\0'; i++ ){
        if( string[i] != ' ' ){
            string[j] = string[i] ;
            j++ ;
        }
    }

    string[j] = '\0' ;

    printf("String without spaces: %s", string);
    return 0;
}