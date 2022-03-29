#include<stdio.h>
enum publictransport { BUS, TRAIN, FLIGHT };
void main()
{
    int cheap,comfort,choice;
    char boardingStation[30],destination[30],reply='y';
    enum publictransport SHIP;

    printf("\n Travel menu");
    printf("\n1.Bus\n2.Train\n3.Flight\n4.Cancel Trip");

    printf("\nEnter boarding station: ");
    scanf("%s",boardingStation); fflush(stdin);

    printf("\nEnter destination station: ");
    scanf("%s",destination); fflush(stdin);

    printf("\nEnter your choice of transport(1-4): ");
    scanf("%d",&choice); fflush(stdin);

    printf("\nEnter values for comfort(y/n)");
    scanf("%c",&reply); fflush(stdin);

    if(reply=='y' || reply=='Y')
    {
        comfort =1;
    }else
    {
        comfort=0;
    }

    printf("Wish to be the ticket for the tour is cheap?(y/n)");
    scanf("%c",&reply);
    fflush(stdin);

    cheap=(reply=='y' || reply=='Y')?1:0;

    switch(choice)
    {
        case BUS : printf("Bus");
                if(comfort && cheap)
                {
                    printf(" is comfort and cheap");
                }else
                {
                    printf("Not so comfortable and cheap");
                }
                break;
        case TRAIN  : printf("Train");
                if(comfort && cheap)
                {
                    printf(" is comfort and cheap");
                }else
                {
                    printf("Not so comfortable and cheap");
                }
                break;
        case FLIGHT : printf("Flight");
                if(comfort && cheap)
                {
                    printf(" is comfort and cheap");
                }else
                {
                    printf("Not so comfortable and cheap");
                }
                break;
        case 4 : printf("Trip cancelled");
                break;
        default : printf("Invalid choice !!");

    }
    printf("%d not usually used for travel",SHIP);

}
