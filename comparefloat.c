#include<stdio.h>
int compare_float(float,float);
void main()
{
    float a=4.5,b=4.5;
    int result=compare_float(a,b);
    printf("result= %d",result);
}
// compare if the float f1 is equal with f2 and returns 1 if true and 0 if false
int compare_float(float f1,float f2)
{
    float precision = 0.00001;
    if(((f1 - precision)<f2 ) && ((f1 + precision)>f2))
    {
        return 1;
    }else
    {
        return 0;
    }
}
