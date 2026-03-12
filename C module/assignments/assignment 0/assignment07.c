//Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>

void main()
{
    int minutes = 70, hours, remaining_minutes;
    hours = minutes / 60;
    remaining_minutes = minutes % 60;
    printf ("%d minutes = %d hours and %d minutes \n", minutes, hours, remaining_minutes);

}