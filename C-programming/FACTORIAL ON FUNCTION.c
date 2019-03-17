#include<stdio.h>
int main()
{
    int a=3;
    int r=fact(a);

    printf("%d",r);
    return 0;
}
int fact(int n){

  int i;
  int fact =1;
  for(i=n;i>0;i--);
  {
      fact=fact*i;
  }



}
