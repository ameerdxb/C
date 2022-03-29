#include<stdio.h>
void main()
{
    char name[6]="Ameer";
    char *p=name;
    /*
    while(*p!='\0')
    {
        printf("%c",*p);
        p++;
    }
    */
    printf("%s",p);
}
