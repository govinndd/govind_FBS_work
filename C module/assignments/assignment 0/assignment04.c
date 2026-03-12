//Write a C program to swap two numbers using a temporary third variable.
#include<stdio.h>

void main ()
{
    int no1 = 10, no2 = 20, temp;
    temp = no1;
    no1 = no2;
    no2 = temp;
    printf("now the number one is %d and the number two is %d" ,no1 , no2  );

}