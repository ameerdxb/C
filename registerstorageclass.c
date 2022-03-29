#include<stdio.h>
void registerstorageclass()
{
    printf("\nDemonstrating register class \n\n");
    // declaring a register variable
    register char b = 'G';

    // printing the register variable 'b'
    printf("Value of the variable 'b'"
           "declared as register: %d\n",b);
    printf("---------------------------------");
}
int main()
{
    printf("A program to demonstrate"
           " Storage Classes in C\n\n");

           registerstorageclass();
    return 0;
}
