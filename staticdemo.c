#include<stdio.h>
void main()
{
    callme();
    callme();
    callme();
}
void callme()
{
    static int counter=1;
    printf("Called me %d times \n",counter);
    counter++;
}
