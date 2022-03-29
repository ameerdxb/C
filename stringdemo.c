#include<stdio.h>
#include<string.h>
#define pr printf
void main()
{
    char firstName[20]="Ameer";
    char middleName[20]="Suhail";
    char lastName[20]="A S";
    char Myname[40]="Ameer Suhail";

    char name[40];
    strcpy(name,firstName);
    pr("\nFirst name is: %s",name);
    // add middle name to name
    strcat(name," ");
    strcat(name,middleName);
    pr("\nAfter adding ,middlename, name= %s",name);

    if(strcmp(Myname,name)==0)
    {
        pr("\nMyname = name");
    }else
    {
        pr("\nMyname != name");
    }
    // concat . and lastName to name
    strcat(name,".");
    strcat(name,lastName);
    pr("\nafter adding surname, name= %s",name);
    pr("\nMyname= %s",Myname);
    // copy name to Myname
    strcpy(name,Myname);
    pr("\nNow, Myname also %s",Myname);
    pr("\nHowever, the number of characters in Myname is %d",strlen(Myname));
}
