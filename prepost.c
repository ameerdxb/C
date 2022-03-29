#include<stdio.h>
void main()
{
    int current_year=2021;
    int next_year,prev;
    //post increment
    next_year=current_year++;
    //pre increment
    current_year=next_year;
    prev=++next_year;
    printf("Current year= %d\n next year= %d\n previous= %d",current_year,next_year,prev);

}
