//Write a program to find first non-repeating character.
#include <stdio.h>
int main() {
    char string[100] ; 
    int i, j, count ;

    printf("Enter a string : ");
    scanf("%[^\n]", string);

    for( i = 0; string[i] != '\0'; i++ ){
        count = 0 ;

        for( j = 0; string[j] != '\0'; j++ ){
            if( string[i] == string[j] )
                count++;
        }

        if( count == 1 ){
            printf("First non-repeating character = %c", string[i]) ;
            break;
        }
    }

    return 0;
}