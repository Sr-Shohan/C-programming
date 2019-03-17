#include<stdio.h>
int main ()
{
    int *a;
    scanf("%d", &a);
    printf("Enter a number %d\n", a);
    printf("The location is %p", &a);
    return 0;
}
