#include<stdio.h>
int main()
{
    unsigned long int n,m,l,i=1,foot,j;
    char c;
    scanf("%lu %lu %lu",&n,&m,&l);
    fflush(stdin);
    scanf("%c",&c);

            while(i<=l)
            {

                if(c=='L')
                {
                    for(j=0; j<n; j++)
                    {
                        i++;
                    }
                    c='R';
                }
                else if(c=='R')
                {
                    for(j=0; j<n; j++)
                    {
                        i++;
                    }
                    c='L';
                }
                else
                    i++;


            }



    if(c=='L')
        printf("L");
    else if(c=='R')
        printf("R");

    return 0;
}
