//Write a program to find longest word.
#include <stdio.h>
int main(){
    char string[100], word[100], longest[100] ;
    int i = 0, j = 0, k, length = 0, maximum = 0 ;

    printf("Enter a sentence : ") ; 
    scanf("%[^\n]", string) ;

    while( string[i] != '\0' ){
        if( string[i] != ' ' && string[i] != '\0' ){
            word[length++] = string[i];
        } else {
            word[length] = '\0';

            if( length > maximum ){
                maximum = length ;
                for( k = 0; k <= length; k++ )
                    longest[k] = word[k] ;
            }
            length = 0 ;
        }

        if( string[i] == '\0' )
            break ;

        i++;
    }

    printf("Longest word = %s", longest ) ;

    return 0;
}