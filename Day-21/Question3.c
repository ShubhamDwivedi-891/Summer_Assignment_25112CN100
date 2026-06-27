//Write a program to count vowels and consonants.
#include <stdio.h>
int main() {
    char string[50] ;
    int i = 0, vowels = 0, consonants = 0 ;

    printf("Enter a string : ") ;
    scanf("%[^\n]", string) ;

    while( string[i] != '\0' ){
        if(( string[i] >= 'A' && string[i] <= 'Z' ) || ( string[i] >= 'a' && string[i] <= 'z' )){
            if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||string[i] == 'O' || string[i] == 'U' ||
               string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o'|| string[i] == 'u' ){
                vowels++;
            }else{
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}