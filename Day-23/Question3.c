//Write a program to check anagram string.
#include<stdio.h>
int main(){
    char string1[100], string2[100], temp ;
    int i, j, length1 = 0, length2 = 0 ;

    printf("Enter first string : " ) ;
    scanf("%[^\n]", string1) ;

    printf("Enter second string : ") ;
    scanf(" %[^\n]", string2) ;

    while( string1[length1] != '\0'){
        length1 ++ ;
    }

    while( string2[length2] != '\0'){
        length2 ++ ;
    }

    if( length1 != length2 ){
        printf("Not Anagram") ;
        return 0 ;
    }else{

    for( i = 0; string1[i] != '\0'; i++ ){
        for( j = i + 1; string1[j] != '\0'; j++ ){
            if( string1[i] > string1[j] ){
                temp = string1[i] ;
                string1[i] = string1[j] ;
                string1[j] = temp ;
            }
        }
    }
    
    for( i = 0; string2[i] != '\0'; i++ ){
        for( j = i + 1; string2[j] != '\0'; j++ ){
            if( string2[i] > string2[j] ){
                temp = string2[i] ; 
                string2[i] = string2[j] ;
                string2[j] = temp ;
            }
        }
    }

   for (i = 0; string1[i] != '\0'; i++) {
        if (string1[i] != string2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
  }
}