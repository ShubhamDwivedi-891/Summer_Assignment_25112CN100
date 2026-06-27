//Write a program to Character frequency.
#include <stdio.h>
int main(){
    char string[100], ch ;
    int i, count = 0 ;

    printf("Enter a string : ");
    scanf("%[^\n]", string) ;

    printf("Enter the character to find : ");
    scanf(" %c", &ch) ;

    for( i = 0; string[i] != '\0'; i++ ){
        if( string[i] == ch )
            count++;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}