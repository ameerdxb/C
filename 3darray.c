#include<stdio.h>
void display(float marks[3][2][3],char name[3][30],char sub[3][30])
{
    int i,j,k;

    for(i=0;i<2;i++)
    {
        printf("\nMarks for %d year :- ",i+1);
        for(j=0;j<3;j++)
        {
            printf("\nMarks for student %s : ",name[j]);
            for(k=0;k<3;k++)
            {
                printf("\nMarks for subject %s:%.2f",sub[k],marks[i][j][k]);
            }
        }
    }
}
void main()
{
    char name[3][30]={"Ameer","Anija","Ankit"};
    char sub[3][30]={"Maths","Physics","Chemistry"};
    float marks[3][2][3];
    int i,j,k;

    for(i=0;i<2;i++)
    {
        printf("\nEnter marks for year: %d",i+1);
        for(j=0;j<3;j++)
        {
            printf("\nEnter marks for student %s",name[j]);
            for(k=0;k<3;k++)
            {
                printf("\nEnter marks for %s ",sub[k]);
                scanf("%f",&marks[i][j][k]);
                fflush(stdin);
            }
        }
    }
    display(marks,name,sub);
}
