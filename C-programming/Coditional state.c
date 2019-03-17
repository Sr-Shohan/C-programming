#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);

  if(a>b){
    if(a>c)
        printf("%d  a is the biggest\n",a);
    else
        printf("%d c is the biggest\n",b);
  }
  else {
    if (b>c)
        printf("%d b is the biggest\n",b);
    else
        printf("%d c is the biggest\n",c);
  }
  return 0;
}
