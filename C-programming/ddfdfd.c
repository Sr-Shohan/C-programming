#include<stdio.h>
int main()
{
    int array[100],i,n,j,key,loc,ck;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    scanf("%d",&key);
    ck=0;
    for(i=0;i<n;i++){
        if(array[i]==key){
            ck=1;
            loc=i+1;
        }
    }
    if(ck==1)
        printf("%d\n",loc);
    else
        printf("No\n");

    return 0;

}
