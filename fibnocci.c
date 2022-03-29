#include<stdio.h>
void fibo(int);
void main()
{
    printf("Fibonacci series upto 20 terms : \n");
    fibo(20);
}

void fibo(int n)
{
    int i,t1=0,t2=1,t;
    t=t1+t2;
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;++i)
    {
        printf("\t %d",t);

        t1=t2;
        t2=t;
        t=t1+t2;
    }

}
