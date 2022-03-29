#include<stdio.h>
enum fuel { PETROL,DIESEL,WHITE_PETROL };
void main()
{
    int ch;
    char fuel [3][20]={"PETROL","DIESEL","WHITE_PETROL"};
    printf("Enter your preferred vehicle: ");
    printf("MENU \n1.Car\n2.Bus\n3.Plane\n4.Cancel");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 : printf("\nTrain uses %s",fuel[1]);
        break;
        case 2 : printf("\nBus uses %s",fuel[1]);
        break;
        case 3 : printf("\nAirplane uses %s",fuel[2]);
        break;
        case 4 : break;
        default: printf("\nInvalid choice!");
    }
}
