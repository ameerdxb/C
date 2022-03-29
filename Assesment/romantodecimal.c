#include<stdio.h>
#include<string.h>
#define pr printf

int digit(char);

int main(){

    char roman_Number[100];
    int i=0;
    long int number =0;

    pr("Enter roman number:  \n");
    scanf("%s",roman_Number);

    while(roman_Number[i]){

         if(digit(roman_Number[i]) < 0)
        {
             pr("Invalid roman digit : %c",roman_Number[i]);
             return 0;
        }

         if((strlen(roman_Number) -i) > 2)
         {
             if(digit(roman_Number[i]) < digit(roman_Number[i+2]))
             {
                 pr("Invalid roman number");
                 return 0;
             }
         }

         if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))
         {
             number = number + digit(roman_Number[i]);
         }
         else
         {
             number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));
             i++;
         }

         i++;
    }

    pr("Its decimal value is : %ld",number);

    return 0;

}

int digit(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         default: value = -1;
    }

    return value;
}
