/*#include<stdio.h>
int binary(int);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d Binary number is %d %d\n",n,binary(n));
    return 0;
}
int binary(int n)
{
    int count=0;
    for(int i=0;i<32;i++)
    {
        if((n&1)==1)
        {
            n=n>>1;
            if((n&1)==0)
            {
                n=n>>1;
                if((n&1)==0)
                {
                    n=n>>1;
                    if((n&1)==1)
                    {
                        count++;
                    }
                }
            }
        }
    }
    if(count)
        printf("Sequence is present %d times\n",count);
    else
        printf("Sequenc is not present\n");
}
*//*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<32;i++)
    {
        if((n&1)==1)
        {
            n=n>>1;
            if((n&1)==0)
            {
                n=n>>1;
                if((n&1)==0)
                {
                    n=n>>1;
                    if((n&1)==1)
                    {
                        count++;
                    }
                }
            }
        }
    }

    if(count)
        printf("Sequence is present %d times\n",count);
    else
        printf("Sequenc is not present\n");
}*/
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        sleep(1);
        printf("%d",i);

    }
}
*//*
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++);
    {
        //sleep(2);
        printf("%d",i);

    }
*//*
#include<stdio.h>
void fun()
{
    int a=10;
   static int b=10;
    printf("%d",a);
    printf("%d",b);
    printf("\n");
    a++;
    b++;
}
 //int a=10;
int main()
    {
        fun();
        fun();
        fun();
            //int a=8;
            //printf("%d",a);
}
*//*
#include<stdio.h>
#include<ctype.h>
int main()
{
    char a='k';
    printf("%c",toupper(a));
    printf("%c",tolower(a));
}
//int a=19;
*/
