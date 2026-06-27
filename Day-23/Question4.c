//Write a program to find maximum occuring character.
#include<stdio.h>
int main(){
    char string[100] ;
    int i, j, count, maximum = 0 ;
    char max_char ;

    printf("Enter a string : ");
    scanf("%[^\n]", string);

    for( i = 0; string[i] != '\0'; i++ ){
        count = 1 ;

        for( j = i + 1; string[j] != '\0'; j++ ){
            if( string[i] == string[j] ) 
                count++ ;
        }

        if( count > maximum ){
            maximum = count ; 
            max_char = string[i] ;
        }
    }

    printf("Maximum occurring character = %c\n", max_char) ;
    printf("Frequency = %d", maximum) ;
    return 0;
}