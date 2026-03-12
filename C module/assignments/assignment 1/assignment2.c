#include <stdio.h>

void main(){
    int number = 151;
    int r1 = number % 100;
    int r2 = number % 10;
    int r3 = r2 / 10;
    if (number){
        printf ("the string is pallindrome");
    }
    else 
    printf ("this string is not a pallindrome");
}