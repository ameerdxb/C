#include<stdio.h>
void main()
{
    char a;
    printf("Enter any input ");
    scanf("%c",&a);
    detect(a);
}
void detect(char a)
{
    if(a>='0' && a<='9')
    {
        printf("%c is a digit",a);
    }
    else if((a>='a' && a<='z')||(a>='A' && a<='Z'))
    {
        printf("%c is an alphabet",a);
    }
    else
    {
        printf("%c is a special symbol",a);
    }
}
