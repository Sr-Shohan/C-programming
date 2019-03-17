#include<stdio.h>
int main()
{
    int i,start,end;
    scanf("%d%d",&start,&end);
    int temp;
     if(start>end){
        temp=start;
        start=end;
        end=temp;
     }
    for(i=start;i<end;i++)
    {
        printf("%d ",i);
    }


    return 0;
}
