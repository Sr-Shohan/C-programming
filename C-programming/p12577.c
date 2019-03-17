#include<stdio.h>
#include<string.h>
int main()
{

    int i=1;
    char s[10];
    while(scanf("%s",s)){
        if(!strcmp(s,"*"))
           break;
        else if(!strcmp(s,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",i++);
        else
             printf("Case %d: Hajj-e-Asghar\n",i++);





    }
 return 0;

}
