#include <stdio.h>
#define pr printf

int main(int argc, char *argv[])
{
    FILE *fp1,*fp2;
    char ch;

    //check if file to be copied already exists
    if((fp1=fopen(argv[1],"r"))==NULL )
        {
            pr("\nIncorrect filename or %s does not exists", argv[1]);
            return -1;
        }

    //check if the file to which contents are to be copied exists
    if((fp2=fopen(argv[2],"r"))!=NULL)
        {
            pr("\nFile %s already exists.",argv[2]);
            pr("Press Y to continue overwrite: ");
            ch=getchar();
            //close the files if the user dont wish to continue
            if(ch!='Y' && ch!='y')
                {
                    //close the files
                    fclose(fp1);
                    fclose(fp2);
                    return -1;

                }
            else
                {
                    fp2 = fopen(argv[2],"w");
                }

        }

      else
        {
            fp2 = fopen(argv[2],"w");
        }

        //copy contents to new file
        while( !feof(fp1) )
        {
            ch = getc(fp1);
            if(ch != EOF)
                {
                    putc(ch, fp2);
                }
        }
    //close the files
    fclose(fp1);
    fclose(fp2);

    //Show copied message
    pr("\nContent of %s are copied to %s.", argv[1],argv[2]);

    return 0;

}
