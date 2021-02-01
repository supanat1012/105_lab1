#include<stdio.h>
int main()
{   long n,m,l,i=1,foot,j;
    char c;
    scanf("%d %d %d",&n,&m,&l);
    fflush(stdin);
    scanf("%c",&c);
    if(0<l<1000000000&& m<l && n<l)
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
                 else
                    i++;


        }


    }
        if(c=='L')
        printf("L");
        else if(c=='R')
        printf("R");
    return 0;
}
