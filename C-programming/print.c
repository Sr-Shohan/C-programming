#include <stdio.h>
void rec_up(int n){
   printf("%d\n",n);
  if(n>1)
     rec_up(n-1);



}


int main()
{
    int n,s;
    scanf("%d",&n);
    s=rec_up(n);

    return 0;
}

