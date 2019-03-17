#include<stdio.h>
int gcdd(int a,int b){
   if(b==0) return a;
   return gcdd(b,a%b);

}
int main(){
    int a,b,g;
    scanf("%d %d",&a,&b);
    g=gcdd(a,b);
    printf("%d\n",g);
    return 0;



}
