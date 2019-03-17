#include<stdio.h>
int main()
{
    int height[40];
    int i,min,pos=1;
    for(i=0;i<3;i++){
        scanf("%d",&height[i]);
    }
    min=height[0];
    for(i=1;i<3;i++){
        if(height[i]<min)
        {
            min=height[i];
            pos=i+1;
        }
    }
    printf("Lowwst is %d\n",min);
    printf("minimum numbers location is %d\n",pos);
    return 0;
}
