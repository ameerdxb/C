#include<stdio.h>

float area(float l,float b)
{
    return l*b;
}
float perim(float l,float b)
{
    return 2*(l+b);
}
void main()
{
    float l,b,a,p;
    printf("Enter the length and breadth of the rectangle respectively");
    scanf("%f %f",&l,&b);
    a=area(l,b);
    p=perim(l,b);
    printf("\nThe area of the rectangle is %.2f",a);
    printf("\nThe perimeter of the rectangle is %.2f",p);

}
