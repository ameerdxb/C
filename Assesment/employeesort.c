#include<stdio.h>
#define pr printf
#define sc scanf
#define ff fflush(stdin)

struct employee
{
    int empid;
    char name[30];
    char desig[30];
    char deptid;
    float salary;
};
typedef struct employee emp;

void display(emp e[100], int n)
{   int i;
    for(i=0;i<n;i++)
    {
        pr("\nEnter the employee id: ");
        pr("%d",&e[i].empid);
        pr("\nEnter the name: ");
        pr("%s",e[i].name);ff;
        pr("\nEnter the designation: ");
        pr("%s",e[i].desig);ff;
        pr("\nEnter the department id: ");
        pr("%c",&e[i].deptid);ff;
        pr("\nEnter the salary: ");
        pr("%f",&e[i].salary);ff;

    }
}

void mergeSort(int a[], int beg, int end)
{
    int mid;
    if(beg<end)
    {
        mid = (beg+end)/2;
        mergeSort(a,beg,mid);
        mergeSort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}

void merge(int a[], int beg, int mid, int end)
{
    int i=beg,j=mid+1,k,index = beg;
    int temp[10];
    while(i<=mid && j<=end)
    {
        if(a[i]<a[j])
        {
            temp[index] = a[i];
            i = i+1;
        }
        else
        {
            temp[index] = a[j];
            j = j+1;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[index] = a[j];
            index++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index] = a[i];
            index++;
            i++;
        }
    }
    k = beg;
    while(k<index)
    {
        a[k]=temp[k];
        k++;
    }
}

void bsearch(emp e[100],int id, int n)
{
   int f=0, r=n,mid;

   while (f <= r) {
	  mid = (f+r)/2;

	  if (e[mid].empid==id) {
         pr("\nSearch Element  : %d  : Found :  Position : %d.\n",id, mid+1);
         break;
	  }
      else if (e[mid].empid<id)
         f = mid + 1;
      else
         r = mid - 1;
   }

   if (f > r)
      pr("\nSearch Element : %d  : Not Found \n", id);
}


void main()
{
    emp e[100];
    int n,i,id;
    pr("Enter the number of employees: ");
    sc("%d",&n);ff;
    for(i=0;i<n;i++)
    {
        pr("\nEnter the employee id: ");
        sc("%d",&e[i].empid);ff;
        pr("\nEnter the name: ");
        sc("%s",e[i].name);ff;
        pr("\nEnter the designation: ");
        sc("%s",e[i].desig);ff;
        pr("\nEnter the department id: ");
        e[i].deptid=getchar();
        pr("\nEnter the salary: ");
        sc("%f",&e[i].salary);ff;

    }

    mergeSort(e->empid,0,n-1);
    mergeSort(e->name,0,n-1);
    pr("\nEnter the id to be searched: ");
    sc("%d",&id);ff;
    bsearch(e,id,n);
    display(e,n);
}
