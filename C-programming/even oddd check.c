#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
printf("Tumi kake vag diba seita likho  ");
scanf("%d",&a);
printf("Tumi ki diya vag diba?  ");
scanf("%d",&b);

if(a%b==0)
    printf("%d %d er gunoniyok ",b,a);
else
    printf("%d %d er gunoniyok na ",b,a);
}

