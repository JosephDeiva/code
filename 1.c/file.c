/*1
#include<stdio.h>
int main()
{
    float x=23.45678;
    printf("%.2f",x);
    return 0;
}
*//*

#include<stdio.h>
int main()
{
    int a=3,b=5;
    int t=a;
     a=b;
     b=t;
    printf("%d %d",a,b);
    return 0;

}
*//*
#include<stdio.h>
int main()
{
    int a,b,c;
    a=0*10; b=010;c=a+b;
    printf("%d",c);
    return 0;
}*//*

#include<stdio.h>
int main(){
int sum=2+4/2+6*2;
printf("%d",sum);
return 0;
}
*//*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[]={1,2,3,4};
    int sum=0;
    for(int i=0;i<4;i+1)
    {
    sum =a[i];
    }
    //printf("%d",(int)&i);
    printf("%g",sum);
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int x=20;
    x%=3;
    printf("%d",x);
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("%d %d %d",a,b,c);
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("sum=%d\n",a&&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a=b);
    char ch= a=b;
    printf("%d\n",ch);
    ch++;
    printf("%d\n",ch);
    printf("d=%d\n",a||b);
    printf("a=%d\n",a);
    printf("b=%d",b);

}
*/
#define MATH_TH

int math_add(int a,int b);
int math_sub(int a,int b);
long long int math_mul(int a,int b);
float math_div(int a,int b);

//#endif
