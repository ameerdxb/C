#include<stdio.h>
void main()
{
    int age=1;
    Enter("Enter age in years");
    scanf("%d",&age);
    //(age>=18)? printf("Eligible to Vote") : printf("You are not eligible");
    if(age>=18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote!");
    }
}

