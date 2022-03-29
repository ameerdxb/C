#include<stdio.h>
union emp{
    int empid;
    char deptid;
};
typedef union emp checkid;

struct employee{
    int empid;
    char deptid;
};
void main()
{
    checkid cid; //union
    struct employee emp1; //struture
    printf("union occupies %d bytes",sizeof(cid));
    printf("\nstructure occupies %d bytes",sizeof(emp1));
    printf("\nEnter employee id: ");
    scanf("%d",&cid.empid);
    if(cid.empid==111)
    {
        printf("Welcome");
    }else
    {
        printf("\nAtleast enter department id: ");
        scanf("%c",&cid.deptid);
        switch(cid.deptid)
        {
            case 's': printf("belong to sales");
            break;
            case 'o': printf("belongs to operations");
            break;
        }
    }

}
