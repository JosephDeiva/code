#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("%d%d",a,b);
    a=b^a;
    b=b^a;
    a=a^b;
    printf("%d%d",a,b);
}
