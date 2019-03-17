#include<stdio.h>
int main(){
int a[100],i,even=0,odd=0,n;
scanf("%d",&n);
for(i=0;i<n;i++){
    a[i]=rand();
    if(a[i]%2==0)
        even++;
    else
        odd++;

}

printf("The total random even number till 100 is %d\n",even);
printf("The total random odd number till 100 is %d\n",odd);

return 0;

}
