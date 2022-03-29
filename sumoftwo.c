#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare two variables
    int a,b,c;
    //Declare a function
    int sum(int,int);
    //Outputs a string constant
    puts("Enter first value");
    //Accept data in digital form and place it in variable a
    scanf("%d",&a);
    //Outputs a string constant
    puts("Enter second value");
    //Accept data in digital form and place it in variable b
    scanf("%d",&b);
    //Store the return value in c
    c=sum(a,b);
    //Output c
    printf("The sum is %d",c);
    return 0;
}
int sum(int a,int b)
{
    //Calculate sum of arguments a and b and return it to the caller function
    return a+b;
}
