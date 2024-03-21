/*#include<stdio.h>
int main()
{
    int a=3,4;
    int b=(3,4);
    if(a==b)
        printf("True");
    else
        printf("Flase");
}
*//*
#include<stdio.h>
int main()
{
    int x,a=10,b=5;
    x=a+b;
    static y=x;
    if(y==x)
        printf("IIES");
    else
        if(y>x)
        printf("Koramangala");
    else
        printf("Bangalure");
}
//Ans=Error
*//*
#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("Add=%d\n",a-(-b));
    printf("Sub=%d\n",a+(~b)+1);
    printf("Mul=%d\n",a<<1);
    printf("Div=%d",a>>1);

}
*//*
#include<stdio.h>
int main()
{
    int a=10,b=10;
    if(a==b)
       break;
    else
    printf("No");
}*//*
#include<stdio.h>
int main()
{
    int main=89;
    printf("%d",main);
}
*//*
#include<stdio.h>
int main()
{
    int a=10;
    void b=&a;
    printf("%d%d",a,b);
}
*//*
#include<stdio.h>
void inc(int *b)
{
    (*b)++;
}
int main()
{
    int a=10;
    inc(&a);
    printf("%d",a);
    return 0;
    //Ans=11
}
*/
