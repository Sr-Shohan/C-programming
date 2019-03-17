#include <stdio.h>
#include <string.h>

int main()
{
 char a[100],b[100];
 gets(a);
 gets(b);
 if(strcmp(a,b)==3)
    printf("same value inputed");
 else
    printf("Not the same value ");
 return 0;
}
