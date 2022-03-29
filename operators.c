#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter the values for a and b");
    scanf("%d %d",&a,&b);

    c=a+b;
    printf("Sum is %f",c);
    c=a-b;
    printf("Difference is %f",c);
    c=a/b;
    printf("Quotient is %f",c);
    c=a*b;
    printf("Product is %f",c);
    c=(int)a%(int)b;
    printf("Remainder is %f",c);
}
