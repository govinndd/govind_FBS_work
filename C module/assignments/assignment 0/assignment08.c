//Write a C program to input the length and width of a rectangle and find its perimeter.
#include<stdio.h>

void main()
{
    int length = 10, width = 20, perimeter;
    perimeter = 2 * (length + width);
    printf("the perimeter of rectangle is %d", perimeter);

}