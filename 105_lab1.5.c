#include<stdio.h>
int main()
{
    int a,i,n,max=0,po;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>max)
                {
                    max=a;
                    po=i+1;
                }
        }
    printf("%d %d",po,max);

}
