#include<stdio.h>
long int sum(long int x,long int y)
{
    long int n;
    n=x+y;
    return n;
}
void main()
{
    // declare two variables
    long int a,b,result;
    long int *ptr1=&a;
    long int *ptr2=&b;

    // outputs a string
    printf("Enter the first number: ");
    // accept data in digital form and place it in variable a
    scanf("%ld",ptr1);
    // outputs a string
    printf("Enter the second number: ");
    // accept data in digital form and place it in variable b
    scanf("%ld",ptr2);

    printf("\nAddress of a is %ld",&a);
    printf("\nAddress of b is %ld",&b);
    printf("\nAddress of a is %ld",ptr1);
    printf("\nAddress of b is %ld",ptr2);

    // store the return value in result
    result=sum(a,b);
    printf("\nThe sum is: %d",result);
}
