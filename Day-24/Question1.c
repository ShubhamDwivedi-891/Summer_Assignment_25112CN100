//Write a program to check string rotation.
#include <stdio.h>
int main(){
    char string1[100], string2[100], temp[200] ;
    int i, length1 = 0, length2 = 0, j, k, found = 0 ;

    printf("Enter first string : ") ;
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
        printf("Not Rotation") ;
        return 0 ;
    }

    for( i = 0; i < length1; i++ )
        temp[i] = string1[i] ;

    for( i = 0; i < length1; i++ )
        temp[length1 + i] = string1[i] ;

    temp[2 * length1] = '\0' ;

    for( i = 0; i <= length1; i++ ){
        for( j = 0; j < length2; j++ ){
            if( temp[i + j] != string2[j] )
                break;
        }

        if( j == length2 ){
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}