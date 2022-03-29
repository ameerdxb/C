#include<stdio.h>

//declaring display function
void display( int array[2][2])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d \t",array[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int i,j,k,m1[2][2],m2[2][2],r[2][2];
    printf("Enter values for first matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
// calling display function
printf("First matrix: \n");
display (m1);
    printf("Enter values for second matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
//calling display function
printf("Second matrix: \n");
display (m2);

    //product
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            {
                for(k=0;k<2;k++)
                {
                    r[i][j]=r[i][j]+(m1[i][k]*m2[k][j]);
                }
            }

        }
    }
printf("\n Product : \n");
display (r);

}

