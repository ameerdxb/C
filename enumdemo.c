#include<stdio.h>
enum money { RUPEE=75, DOLLAR=1, YEN=110, EURO };
typedef enum money countrycurrency;
// demonstrate the usage of enum - assigning names to integer constants is called enum
void main()
{
    countrycurrency currency=RUPEE;
    countrycurrency uscurrency=DOLLAR;
    countrycurrency pariscurrency=EURO;

    printf("Cash in my pocket is %d rupees",currency);
    printf("\n%d DOLLAR = %d RUPEES",DOLLAR,RUPEE);
    printf("\nYen value= %d",YEN);
    printf("\nEuro value= %d",EURO);

}
