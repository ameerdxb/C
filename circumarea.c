#include<stdio.h>
const float PI=3.141;
int main()

   {
        //declare 3 variables
        float a,r,c;
        float area(float);
        float circum(float);
        printf("Enter radius of the circle: ");
        //
        scanf("%f",&r);
        fflush(stdin);
        a=area(r);
        c=circum(r);
        printf("Area of circle is %.2f and circumference of circle is %.2f",a,c);
        return 1;
   }
    float area(float r)
    {
        return PI*r*r;
    }
    float circum(float r)
    {
        return 2*PI*r;
    }

