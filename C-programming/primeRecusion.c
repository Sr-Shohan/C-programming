#include <stdio.h>

int linearSearch(int i, int n, int v, int a[])
{
    if(i==n) return 0;
    if(a[i]==v) return i;
    return linearSearch(i+1, n, v, a);
}

int main()
{
    int a[100], n, q, v, x, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &q);
    for(i=0; i<q; i++)
    {
        scanf("%d", &v);
        x = linearSearch(0, n, v, a);
        if(x==0) printf("Not found\n");
        else printf("Found at %d\n", x+1);
    }
    return 0;
}
