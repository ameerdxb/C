#include <stdio.h>
int add(int,int);
int main()
{
   int a,b;
   int (*ip)(int,int);  // declaration of a function pointer
   int result;
   printf("Enter the values of a and b : ");
   scanf("%d %d",&a,&b);
   ip=add;
   result=(*ip)(a,b);  //calling a func using func pointer
   printf("Value after addition is : %d",result);
    return 0;
}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
