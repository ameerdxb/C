#include<stdio.h>
#include<malloc.h>
void main()
{
    char *ptr;
    int size;
   // char name[5];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    ptr=malloc(size);
    printf("\nEnter your name: ");
    scanf("%s",ptr);
    printf("%s",ptr);

}
