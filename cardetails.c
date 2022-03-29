#include<stdio.h>
#define pr printf
#define sc scanf

void display(char name[3][20], char model[3][20], char fuel[3][10], char cnumber[3][10])
{   int i;
    for(i=0;i<3;i++)
    {
        pr("\nThe car name is %s",name[i]);
        pr("\nThe car model is %s",model[i]);
        pr("\nThe car fuel type is %s",fuel[i]);
        pr("\nThe car number is %s",cnumber[i]);
        pr("\n");
    }
}

void main()
{   int i,n;
    char model[3][20], name[3][20],fuel[3][10],cnumber[3][10];
    for(i=0;i<3;i++)
    {
        pr("\nEnter car name: ");
        sc("%s",&name[i]);
        pr("\nEnter car model: ");
        sc("%s",&model[i]);
        pr("\nEnter car fuel type: ");
        sc("%s",&fuel[i]);
        pr("\nEnter the car number: ");
        sc("%s",&cnumber[i]);

    }

        display(name,model,fuel,cnumber);

}


