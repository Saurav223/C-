#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("wordlist.txt", "w");
    for (int i = 0; i < 100000; i++)
    {
        if (i < 10)
        {
            fprintf(fp,"binod0000%d\n",i);
            fprintf(fp,"binod000%d\n",i);
        }
        else if ( i>=10 && i< 100){
            fprintf(fp,"binod000%d\n",i);
            fprintf(fp,"binod00%d\n",i);
        }
        else if (i>=100 && i< 1000){
            fprintf(fp,"binod00%d\n",i);
            fprintf(fp,"binod0%d\n",i);
        }
        else if(i>=1000 && i<10000) {
            fprintf(fp,"binod0%d\n",i);
            fprintf(fp,"binod%d\n",i);
        }
        else{
            fprintf(fp,"binod%d\n",i);
        }
    } 
    fclose(fp);
    return 0;
}
