#include<stdio.h>
int main()
{   unsigned long int a;

    scanf("%lu",&a);
    printf("%lu",a%3);
    printf(" %lu",a%11);
    return 0;
}
