#include<stdio.h>
#include<string.h>
void main()
{
    char ch[3][30]={"David","Jacob","Aravind"};
    int i,j;
    char temp[30];
    for(i=0;i<3;i++)
    {
         for(j=i+1;j<2;j++)
         {
             if(strcmp(ch[i],ch[j]>0))
             {
                 strcpy(ch[i],temp);
                 strcpy(ch[j],ch[i]);
                 strcpy(temp,ch[i]);
             }
         }
    }
    printf("\nThe sorted names are: \n");
    for(i=0;i<3;i++)
    {
        printf("%s\n",ch[i]);
    }
}
