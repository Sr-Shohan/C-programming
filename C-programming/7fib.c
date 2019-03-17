#include<stdio.h>
int fib(int n){
 if(n<3) return 1;
 return fib(n-2)+fib(n-1);
}

int main(){
    int n,f;
    scanf("%d",&n);
    f=fib(n);
    printf("%d",f);
    return 0;


}
