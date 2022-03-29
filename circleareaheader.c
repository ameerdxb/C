#include"constants.h"
#include<stdio.h>
void main()
{
    extern float PI;
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Area is %.3f sq.cm",PI*radius*radius);
}
