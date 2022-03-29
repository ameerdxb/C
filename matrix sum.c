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
    int i,j,m1[2][2],m2[2][2],r[2][2];
    printf("Enter values for first matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    // calling display function
display (m1);
    printf("Enter values for second matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    //
display (m2);
    //adding
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            r[i][j]=m1[i][j] + m2[i][j];
        }
    }
    printf("\n Sum : ");
display (r);

}

