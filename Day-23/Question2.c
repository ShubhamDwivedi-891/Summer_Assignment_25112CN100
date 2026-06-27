//Write a program to find first repeating character.
#include<stdio.h>
int main(){
    char string[100] ;
    int i, j ;

    printf("Enter a string : ") ;
    scanf("%[^\n]", string) ;

    for( i = 0; string[i] != '\0'; i++ ){
        for( j = i + 1; string[j] != '\0'; j++ ){
            if( string[i] == string[j] ){
                printf("First repeating character = %c", string[i]);
                return 0;
            }
        }
    }

    printf("No repeating character");

    return 0;
}