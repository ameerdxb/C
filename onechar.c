#include<stdio.h>
void main()
{
    //declare variable ch
    char ch;
    //declare FILE pointer
    FILE *fp;
    //prompt the user to input a character
    printf("\nEnter a character: ");
    //accept a character to store in ch
    scanf("%c",&ch);
    //open a file and assign it to FILE pointer in required mode
    fp=fopen("mychar.dat","a+");
    //w- write overwrite
    //a- append mode
    fputc(ch,fp); // write a character from RAM to Disk
    fclose(fp);// close FILE pointer
    //prompt the user the input character stored successfully
    printf("\nThe character stored in mychar.dat file successfully!");
}
