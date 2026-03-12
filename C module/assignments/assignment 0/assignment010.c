//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.
#include<stdio.h>
void main ()
{
    float s1 = 79, s2 = 84, s3 = 96, s4 = 99, s5 = 78, total_sum, percentage;
    total_sum = s1 + s2 + s3 + s4 + s5;
    percentage = total_sum / 5;
    printf("the total number obtain by the student is %f the percentage is %f", total_sum, percentage);
}