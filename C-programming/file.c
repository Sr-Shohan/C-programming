#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="my_dddfile.txt";
    fp=fopen(filename,"w");

    fprintf(fp,"This is a file created by my program!\n");
    fprintf(fp,"I am really happy but not satisfid  \n");

    fclose(fp);

    fp=fopen(filename,"r");
    fprintf(fp,"\t\t  oh i need you by my side ");

    fclose(fp);

    return 0;
}
