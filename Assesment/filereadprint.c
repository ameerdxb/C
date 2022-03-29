#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
		FILE *fptr = fopen(argv[1],"r");
	    	int c=0,w=0,l=0;
		if(argc==2)
		{
	    		char ch;
	    		//check if file exists
	    		if (fptr == NULL)
	    		{
				printf("File not found!\n");
				exit(0);
			}
	    		while ((ch = fgetc(fptr)) != EOF)
	    		{
				c++;
				if (ch == '\n' || ch == '\0')
		   	 		l++;
				if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
		    			w++;
		    	}
		    	printf("For the passed file, \n");
		    	printf("\nTotal number of characters: %d\n", c);
    			printf("\nTotal number of words: %d\n", w);
    			printf("\nTotal number of sentences: %d\n", l);
    			fclose(fptr);
		}
		else
			printf("\n Please pass a file name...");
    		return 0;
}
