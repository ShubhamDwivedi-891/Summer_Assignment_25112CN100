//Write a program to count words in a sentence.
#include <stdio.h>
int main() {
    char string[100];
    int i = 0, words = 1;

    printf("Enter a sentence : ");
    scanf("%[^\n]", string);

    while( string[i] != '\0' ){
        if( string[i] == ' ' )
            words++;
        i++;
    }

    printf("Number of words = %d", words);
    return 0;
}