#include <bits/stdc++.h>

using namespace std ;

int main() {

    char str[201] ;
    scanf("%s",str) ;

    int len = strlen(str) ;

    for(int i = 0 ; i < len ; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') // if the char is in Uppercase , converting it in lower case..
            str[i] += 32 ; // This is the ASCII difference between Uppercase and Lowercase letters..
    }

    char sss[201] ; // This is going to keep my result string..
    int j = 0 ;
    for(int i = 0 ; i < len ; i++) {
        // if current char is not vowel them deffiniately it's an consonent..
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y') {
            sss[j] = '.' ; // if it's consonent we have to put a '.' char before consonent letter
            j++ ;
            sss[j] = str[i] ; // after it we have to keep the consonent..
            j++ ;
        }
    }
    sss[j] = '\0' ; // We know strings in C Language ends with a null char..
    printf("%s",sss) ;

    return 0 ;
}
