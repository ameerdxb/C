#include<stdio.h>
#define pr printf
#define sc scanf
void main()
{
int ch;
char fuel[3][30]={"PETROL","DIESEL","WHITE PETROL"};
pr("Enter your choice: ");
pr("\n1.Car \n2.Bus \n3.Flight \n4.Exit\n");
sc("%d",&ch);
switch(ch)
{
case 1: pr("\nCar uses %s",fuel[1]);
break;
case 2: pr("\nBus uses %s",fuel[1]);
break;
case 3: pr("\nFlight uses %s",fuel[2]);
break;
case 4: break;
default: pr("\nInvalid choice!");
}
}
