//Bit shifting program
//Program to shift the desired bits
#include<stdio.h>
void main()
{
    auto int x=2;
    printf("x= %d\n",x);
    x=x<<2;
    printf("After shifting one bit to left, value of x = %d \n",x);
    //x=x>>1;
    x=4;
    printf("After shifting one bit to right, value of x = %d",x);
}
