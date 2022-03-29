#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define pr printf
#define sc scanf
void main()
{
    char sentence[100];
    char search[30];
    int i,j,s1,s2,flag=0;
    pr("Enter a sentence: ");
    gets(sentence);
    fflush (stdin);
    pr("\nEnter a word to search in it: ");
    gets(search);
    s1=strlen(sentence);
    s2=strlen(search);
    if(s1<s2)
    {
        flag=0;
    }
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            if(sentence[i]==search[j])
            {
                flag=1;
            }
            if((i==s1 || sentence[i]==' ') && j==s2)
            {
                flag=1;
            }
            if(sentence[i]!=' ')
            {
                ++i;
            }
            i++;
        }
    }
    if(flag==0)
    {
        pr("\nThe searched string not found!!!");
    }else
    {
        pr("\nFound!!");
    }
}
