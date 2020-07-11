#include <stdio.h>

int main ()

{

    int q,i,v,c=0;

    scanf("%d",&q);

    for (i=0;i<q;i++)
    {
        scanf("%d",&v);

        if (v == 0)
        c++;
    }

    if (q-c >= c )
        printf("N\n");
    else
        printf("Y\n");
    return 0;
}
