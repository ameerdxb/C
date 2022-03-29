#include<stdio.h>
#define pr printf
struct emp
{
    int empid;
    char empname[20];
    float salary;
};
typedef struct emp employee;
int main()
{
char initial='G';
char name[3][20];
employee e;
signed char luckynum=256;
unsigned char num=252;
long distance=123456;
double atomicradius=6*10E-05;
unsigned int maxrowsinexl=65535;
short int age=22;
float radius=8.9;

pr("\nchar occupies %d bytes",sizeof(initial));
pr("\nsigned char occupies %d bytes",sizeof(luckynum));
pr("\nunsigned char occupies %d bytes",sizeof(num));
pr("\nlong occupies %d bytes",sizeof(distance));
pr("\ndouble occupies %d bytes",sizeof(atomicradius));
pr("\nunsigned int occupies %d bytes",sizeof(maxrowsinexl));
pr("\nshort int occupies %d bytes",sizeof(age));
pr("\nfloat occupies %d bytes",sizeof(radius));
pr("\nsize of name is %d bytes",sizeof(name));
pr("\nsize of employee variable e is %d bytes",sizeof(e));
return 1;
}
