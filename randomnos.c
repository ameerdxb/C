#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("\nGenerating random numbers... \n ");
    for(i=1; i<=n; i++)
    {
        printf ("\n%d", rand());
    }

}
