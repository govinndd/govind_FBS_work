//Write a C program to convert temperature from Celsius to Fahrenheit using the formula:
//F = (C *9/5) + 32.
#include<stdio.h>

void main()
{
   double C = 30.5, F;
   //for converting the temp from C to F the formula is 
   F = (C*9/5) + 32;
   printf( "temperature from celcius to Fahrenheit is %F" , F);
}