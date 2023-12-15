#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i,t,a[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t;i++)
    {
        if(a[i]%3==0)
            printf("Second\n");
        else
            printf("First\n");
    }
    return 0;
}
 
