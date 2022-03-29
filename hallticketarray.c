// linear search
// program to accept hallticket nos into array
#include<stdio.h>
void main()
{
    long int htarray[5],n;
    short int flag=0;
    printf("Enter 5 hall ticket numbers: ");
    //*ht - hall ticket pointer
    for(long int *ht=htarray;ht<htarray+5;ht++)
    {
        scanf("%ld",ht);
        fflush(stdin);
    }
    puts("\nEnter hall ticket number to search: ");
    scanf("%ld",&n);
    fflush(stdin);
    for(short int i=0;i<5;i++)
    {
        if(n==htarray[i])
        {
            flag=1;
            printf("\nThe hall ticket number found at %hd position",i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("\nThe hall ticket not found!!!");
    }

}
