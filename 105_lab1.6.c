#include<stdio.h>
int main()
{   int n,m,l,i=1,foot,j;
    char c;
    scanf("%d %d %d",&n,&m,&l);
    fflush(stdin);
    scanf("%c",&c);
    if(0<n<1000 && 0<m<1000 && m<l && n<l && 0<l<1000000000)
    {
        while(i<=l)
        {

                 if(c=='L')
                 {
                     for(j=0;j<n;j++)
                     {
                         i++;
                     }
                     c='R';
                 }
                 else if(c=='R')
                 {
                     for(j=0;j<n;j++)
                     {
                         i++;
                     }
                     c='L';
                 }



        }
        if(c=='L')
        printf("L");
        else if(c=='R')
        printf("R");
    }
}
