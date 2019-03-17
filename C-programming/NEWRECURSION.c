#include<stdio.h>
#include<conio.h>

int c(int i,int no)
{
    if(i==no)
        return 0;
    else
        if(no%i==0)
             return 0;
        else
            return (c(i+1,no));
}






int main(){
int no,f;
printf("Enter a value :");
scanf("%d",&no);

f=c(2,no);
if(f==0)
    printf("Number is prime:");
else
printf("Number is not prime:");

return 0;





}
