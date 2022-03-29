#include<stdio.h>
//program to accept two numbers are equal or not
void main()
{
//start of main block
    // declare two variable
    int a,b;
    // prompt user for first number
    printf("Enter first value: ");
    // accept first number to store it in a
    scanf("%d",&a);
    // prompt user for second number
    printf("Enter second value: ");
    // accept second number to store it in b
    scanf("%d",&b);

    // use ternary operator to print both are equal or not
    (a==b)?printf("Both are equal") : printf("Not equal");
// end of main block
}
