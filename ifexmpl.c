#include<stdio.h>
int LIMITFORAGE=120;
void main()
{
    int age=1;
    printf("Enter age in years");
    scanf("%d",&age);
    if(age<=LIMITFORAGE)
    {

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
    else
    {
        printf("Invalid age..age is limited");
    }

}

