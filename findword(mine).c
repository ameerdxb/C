#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    char str[]="Apples are good for your health";
    char to_find[]="good";
    if (strstr(str, to_find))
    {
        printf("The word has been found\n");
    }else
    {
        printf("The word has NOT been found\n");
    }
    return 0;
}
