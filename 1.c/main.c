/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

               -----------------------------------------------------------------------------


*/
/*#include<Stdio.h>
int main()
{
    int i;
    char ch;
    float f;
    printf("Enter the integer:\n");
    scanf("%d",&i),
    printf("Enter the character:\n");
     fflush(stdin);
    scanf("%c",&ch);
    printf("Enter the float data:\t"),
    scanf("%f, &f");
    printf("%f %c %d",f,ch,i);

}
                 -----------------------------------------------------------------------------
*/

/*#include<Stdio.h>
int main()
{
    int i;
    char ch;
    float f;
    printf("%Enter the character,integer,float data\t");
    scanf("%c %d %f",&ch,&i,&f);
    printf("%Enter the integer,character,float data\t");
    scanf("%d %c %f",&i,&ch,&f);
    printf("%Enter the float data,integer,character\t");
    scanf("%f %d %c",&f,&i,&ch);
}

             -----------------------------------------------------------------------------
*//*

#include<stdlib.h>
#include<limits.h>
#include<float.h>

int main ()

{
    printf("CHAR_BIT : %d\n", CHAR_BIT);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    printf("CHAR_MIN : %d\n", CHAR_MIN);
    printf("INT_MAX : %d\n", INT_MAX);
    printf("INT_MIN : %d\n", INT_MIN);
    printf("LONG_MAX : %ld\n", (long) LONG_MAX);
    printf("LONG_MIN : %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX : %d\n", SCHAR_MAX);
    printf("SCHAR_MIN : %d\n", SCHAR_MIN);
    printf("SHRT_MAX : %d\n", SHRT_MAX);
    printf("SHRT_MIN : %d\n", SHRT_MIN);
    printf("UCHAR_MAX : %d\n", UCHAR_MAX);
    printf("UINT_MAX : %u\n", (unsigned int)UINT_MAX);
    printf("ULONG_MAX : %lu\n", (unsigned long)ULONG_MAX);
    printf("USHRT_MAX : %d\n", (unsigned short)USHRT_MAX);

    return 0;

    }

            -----------------------------------------------------------------------------
*//*
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

int main(int agrc, char** argv)
{
    printf("Storage size for float:%d\n",sizeof(float);
    printf("FLT_MAX:%g\n",(float) FLT_MAX);
    printf("FLT_MIN:%g\n",(float)FLT_MIN);
    printf("-FLT_MAX:%g\n",(float) -FLT_MAX);
    printf("-FLT_MIN:%g\n",(float) -FLT_MIN);
    printf("DBL_MAX:%g\n",(double) DBL_MAX);
    printf("DBL_MIN:%g\n",(double) DBL_MIN);
    printf("-DBL_MAX:%g\n",(double)-DBL_MAX);
    printf("Precision value:%d\n",FLT_DIG);

    return 0;
}

               -----------------------------------------------------------------------------
*//*
#include<stdio.h>
#define name main

int name()
{
    int a,b,c;
    printf("Enter the 2 number\n");
    scanf("%d,%d",&a,&b);
    c= a+b;
    printf("Sum = %d",c);

}

                -----------------------------------------------------------------------------
*//*
#include<stdio.h>
#define name main

int name()
{
    char a='2';
    char b='4';
    //short c=a+b;
    char c=a+b;
   // printf("%hd",c);
 printf("%d",c);

}

               -----------------------------------------------------------------------------
*//*

#include<stdio.h>
 int main()

 {
     char ch ='A';
     printf("%c=%d",ch,ch);


 }

              -----------------------------------------------------------------------------
*//*
#include<stdio.h>

 int main ()
 {
     char ch;
     printf("Enter the character\n");
     scanf("%c",&ch);
     printf("ASCII Character%c=%d",ch,ch);

 }

                 -----------------------------------------------------------------------------
 *//*
 #include<stdio.h>

 int main()
 {
     char ch1=' ';
     char ch2='!';
     char sum;
     sum=ch1+ch2;
     printf("%c=%d",sum,sum);
 }
*//*
                    -----------------------------------------------------------------------------
                                              'ESCAPE SEQUENCE'
1. \n
2. \a
3. \?

*//*
#include<stdio.h>
 int main ()

 {
     // \n
     printf("Hi! Welcome all\n");
     printf("To the Embedded course\n");
     printf("*** IN IIES ***\n");
     // \a
     printf("This is the alarm sound or bell sound\a\n");
     // \?
     printf("This is a question mark\?");


 }*/

/* #include<stdio.h>
 int main ()

{
    // \b
    printf("Hello\b World\n");
    // \"
    printf("This is a double quotes:\" \" \n");
    // \'
    printf("This the single quotes:\'\n");
    // \t
    printf("Name:\tRam;\tAge:\t22\n");
    // \v
    printf("Hello\v world\n");
    // \h
    printf("Hello\fWorld\n");
    // \r
    printf("Helo\rWorld\n");
    // \101
    printf("This is an octal value:\101\n");
    // \x41
    printf("This is a hexadecimal value\x41\n");
    // \\
    printf("This is blackslash:\\");


}
*//*
         EXAMPLES
*//*
#include<stdio.h>

int main()
 {
     printf("\"Hello World\"");
}
*//*
#include<stdio.h>

int main()
{
    float f;
    printf("Enter the float data:\n");
    scanf("%f",&f);
    float res=f+10;
    printf("res=%f\n",res);
    printf("res=%d\n",res);
    printf("res=%g",res);

}*//*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    printf("%f\n",ceil(4.2));
    printf("%f\n",floor(4.5));
    printf("%d\n",abs(-45));
    printf("%f\n",sqrt(16));
    printf("%f\n",pow(2,2));
    printf("%f\n",cbrt(125));

}*//*
#include<stdio.h>

int main()
{

    float f1,f2;
    printf("Enter 2 float number\n");
    scanf("%f %f",&f1,&f2);
    printf("%f",f1*f2);
}

*//*
#include<stdio.h>

int main()
{
    int l,b;
    printf("Enter the 2 Area of rectangle:\n");
    scanf("%d%d",&l,&b);
    int sum=l*b;
    printf("%d\n",sum);
    printf("Enter the 2 perimeter of rectangle:\n");
    scanf("%d%d",&l,&b);
    int res=2*(l+b);
    printf("%d",res);
}*//*
#include<stdio.h>
#define AREA l*b
#define PERI 2*(l+b)
#define PI 3.14
int main ()
{
    int l=20,b=5;
    printf("PI=%d",PI);
    printf("AREA =%d",AREA);
    printf("Perimeter of rectangle=%d",PERI);
}
*//*
#include<stdio.h>
#define PI 3.14

int main()
{
    float r=2;
    printf("cercumfernce of a circle =%f\n",2*PI*r);

    printf(" Area of a circle =%f\n",PI*r*r);


}*//*
#include<stdio.h>
int main()
{
    volatile int a=7;
    const float f=6.75;
    const char ch= 'j';
    printf("%c %d %f\n",ch,a,f);
    a++;
    printf("%d",a);
}
*//*
#include<stdio.h>
int main()
{
    unsigned short int s=0,s1=0;
    s++;
    s1--;
    printf("%u %u",s,s1);
    // %d also use in the unsigned
}
*/
/*

#include<stdio.h>
int main()
{
    int a=10,b=20,temp;
    printf("a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d",a,b);

}
*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value a and b:\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);

}*//*
#include<stdio.h>

int main()
{
    int a;
    char b;
    printf("Enter the a value:\n");
    scanf("%d",&a);
    printf("enter the b value:\n");
    scanf(" %c",&b);
    printf("The A value is%d\n",a);
    printf("The B value is%c\n",b);
    return 0;

}
*//*
#include<stdio.h>
int main()
{
    int a=20,b=10;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%%b=%d\n",a%b);

}*//*
#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\n",++a);
    printf("%d\n",a++);
    printf("%d\n",--a);
    printf("%d",a--);

}
*//*
#include<stdio.h>
int main
{
    int a=10,b;
    b=a++ + a++ + a++;
    printf("%d",b);
}*//*
#include<stdio.h>
int main()
{
    int a=2,b;
    b=--a + --a + --a;
    printf("%d",b);
}
*//*
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("a==b=%d\n",a==b);
    printf("a!=b=%d\n",a!=b);
    printf("a>b=%d\n",a>b);
    printf("a<b=%d\n",a<b);
    printf("a>=b=%d\n",a>=b);
    printf("a>=b=%d\n",a<=b);
}*//*
#include<stdio.h>
int main()
{
    int a=20,b=20;
    printf("a&&b=%d\n",a&&b);
    printf("a||b=%d\n",a||b);
    printf("!a=%d\n",!a);
    printf("!b=%d\n",!b);
    int b1=0;
    printf("!b1=%d\n",!b1);

}*//*
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("a=b=%d\n",a=b);
    printf("a+=b=%d\n",a+=b);
    printf("a-=b=%d\n",a-=b);
    printf("a*=b=%d\n",a*=b);
    printf("a/=b=%d\n",a/=b);
    printf("a%%=b=%d\n",a%=b);
}*//*
#include<stdio.h>
int main()
{
    int a=10,b=5;
    printf("a&b=%d\n",a&b);
    printf("a|b=%d\n",a|b);
    printf("a^b=%d\n",a^b);
    printf("a>>b=%d\n",a>>b);
    printf("a<<b=%d\n",a<<b);
    printf("~b=%d",~b);
    printf("~a=%d",~a);
}*/

/*
#include<stdio.h>
int main()
{
    char a=3000;
    printf("%d",a);
}
*//*
#include<stdio.h>
int main()
{
    int a=12;
    printf("~a=%d",~a);
}
*//*
#include<stdio.h>
int main()
{
    const int a=5,b=12,c=0;
    volatile int a1=5,b2=12;
    printf("a||b=%d\n",a||b);
    printf("a&b=%d\n",a&b);
    printf("%d\n",a1++,a1++,++a1);
    printf("%d\n",(!(a&&b)||c));
    printf("%d %d",~a,~b);

}*//*
#include<stdio.h>
int main()
{
    int a=1,b=1;
    printf("%d\n",a>>b);
    printf("%d\n",b<<1);
    printf("%d",b<<32);
}*//*
#include<stdio.h>
int main ()
{
    int a=5,b=2;
    printf("%d\n",a+=b);
    printf("%d\n",a-=b);
    printf("%d\n",a*=b);
    printf("%d\n",a/=b);
    printf("%d\n",a%=b);
    printf("%d\n",a&=b);
    printf("%d\n",a|=b);
    printf("%d\n",a^=b);
    printf("%d\n",b<<=b);
    printf("%d\n",b>>=1);

}*//*

#include<stdio.h>
int main()
{
    //Conditional operator/ternary/tertiary
    int a=5,b=12;
    a>b?printf("%d>%d",a,b):printf("%d>%d",b,a);
    a>b?printf("%d>%d",a,b):printf("%d<%d",a,b);


}*//*
#include<stdio.h>
int main ()
{
    int a;
    printf("Enter the value:\n");
    scanf("%d",&a);
    (a%2!=1)?printf("Even number=%d\n",a):printf("odd number=%d\n",a);
    (a%2==0)?printf("Even number=%d\n",a):printf("odd number=%d\n",a);

    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int num=3,num1;
    num1=((num==3)?13:5);
    printf("%d",num1);
}
*//*
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the valu of a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
(c%2!=1)?printf("Its even=%d",c):printf("Its odd=%d",c);
return 0;
}
*//*
#include<stdio.h>
int main()
{
    int a=10;
    printf("a=%d\t&a=%d\n",a,&a);
    printf("sizeof(a)=%d\nsizeof(int)=%d\nsizeof(char)=%d\nsizeof(double)=%d\nsizeof(float)=%d\nsizeof(short)=%d\nsizeof(long)=%d\nsizeof(long long)=%d\n",
           sizeof(a),sizeof(int),sizeof(char),sizeof(double),sizeof(float),sizeof(short),sizeof(long),sizeof(long long));
    int*p;
    p=&a;
    printf("p=%d *p=%d a=%d &a=%d",p,*p,a,&a);
    return 0;

}*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 value:\n");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);


}*//*

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 value:\n");
    scanf("%d%d",&a,&b);
    int *p=a;
    b=*p;
    a=b;
    printf("%d%d",a,b);

}
*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 value:\n");
    scanf("%d%d",&a,&b);
    (a==b)?printf("a=%d\n",a):printf("b=%d\n",b);
    (b==b)?printf("a=%d\n",a):printf("b=%d\n",b);
    printf("%d%d",a,b);

}*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 value:\n");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d %d",a,b);
}
*//*
#include<stdio.h>
int main ()
{
    int num;
    printf ("Enter value:\n",num);
    scanf ("%d",&num);
if(num<0)
{
    printf("Its a-ve number:%d\n",num);
    num=-num;
    printf("Its a+ve number:%d\n",num);
}
    printf("HI");
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 2 values:\n",a,b);
    scanf("%d%d",&a,&b);
    if(b<a)
    {
        printf("b=%d<a=%d",b,a);
    }

}
*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 2 values:\n",a,b);
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("a=%d<b=%d",a,b);
    }
    else
    {
        printf("a=%d>b=%d",a,b);
    }

}
*//*
#include<stdio.h>
int main ()
{
    int a;
    printf ("Enter value:\n",a);
    scanf ("%d",&a);
if(a<0)
    printf("Its a-ve number:%d\n",a);

else

    printf("Its a+ve number:%d\n",a);

}
*//*
#include<stdio.h>
int main ()
{
    int a,b;
    printf ("Enter value:\n",a,b);
    scanf ("%d%d",&a,&b);
if(a>b)
    printf("a is >\n");
else if(b>a)
    printf("b is >\n");

else

    printf("a==b\n");
printf("hii");
}
*//*
#include<stdio.h>
int main ()
{
    int a;
    printf ("Enter value:\n",a);
    scanf ("%d",&a);
if(a<10)
{
    if(a==5)
        printf("a is 5");
    else
    printf("num<10");
}
else
{
    printf("a is >10");
}
}*//*
#include<stdio.h>
int main ()
{
    int a,b;
    printf ("Enter value:\n",a,b);
    scanf ("%d%d",&a,&b);
if(a>=b)
{
    if(a==b)
        {
        printf("a and b same value\n");
    }
    else{
        printf("a > b\n");
    }
}
else
   {

    printf("a is <b\n");
   }
   printf("%d%d",sizeof(7.5f),sizeof('A'));
}*//*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 value:\n"      );
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        printf("a=%d",a);
    }
    else if(b>a)
    {
        if(b>c)
            printf("b=%d",b);
    }
    else if(c>a)
    {
        if(c>b)
            printf("c=%d",c);
    }
    else
        printf("All values are equal");

return 0;
}

*//*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 value:\n"      );
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("a=%d",a);
        }
        else{
            printf("c =%d is>",c);
        }
    }
    else
    {
        if(b>c){
            printf("b=%d is >",b);
        }
        else{
            printf("c=%d is >",c);
        }
        return 0;
    }
}
*//*

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 value:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        (a>c)?printf("a=%d",a):printf("c=%d",c);
    }
    else if(b>c)
    {
        printf("b=%d",b);
    }
    else if(c>a)
    {
        printf("%d",c);
    }
    else
    printf("all are equal");
    return 0;
}*//*

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 values:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("a=%d",a);
    }
    else if((b>a)&&(b>c))
    {
        printf("b=%d",b);
    }
    else if((c>a)&&(c>b))
    {
        printf("c=%d",c);
    }
    else
        printf("All are equal");
}
*//*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 values:\n");
    scanf("%d%d",&a,&b);
    if(a%2==0)
    {
        printf("a=%d is even number",a);
    }
    else
        printf("b=%d is odd number",b);
}*/
/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 values:\n");
    scanf("%d%d",&a,&b);
    if (a%2==0)
    {
        printf("a is even\n");

    }
    else if(b%2==0)
    {
        printf("b is even\n");
    }
    else if(a%2!=0){
        printf("a is odd\n");
        }
    else if(b%2!=0){
        printf("b is odd\n");
    }
}*//*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 value:\n");
    scanf("%d%d",&a,&b,&c);
    ((a>b)&&(a>c))?printf("ais>"):((b>a)&&(b>c))?printf("bis >"):printf("c is >");

}
*//*
#include<stdio.h>
int main()
{
    int a,b,c,res;
    scanf("%d%d%d",&a,&b,&c);
    res = (a>b)?(a>c)?a:c:(b>c)?b:c;
    printf("%d",res);

}*/
/*
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    (a/b)?printf("x=%d",a/b):printf("y=%d",b/a);
}
*/
/*
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    (num%2==1)?printf("num is odd"):printf("num is even");

}

*//*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:printf("ONE");
        break;
        case 2:printf("TWO");
        break;
        case 3:printf("THREE");
        break;
        case 4:printf("FOUR");
        break;
        case 5:printf("FIVE");
        break;
        default:printf("Invalid Input");
    }

}*/
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:printf("Sunday");
        break;
        case 2:printf("Monday");
        break;
        case 3:printf("Tuesday");
        break;
        case 4:printf("Wedesday");
        break;
        case 5:printf("Thursday");
        break;
        case 6:printf("Friday");
        break;
        case 7:printf("saturday");
        break;
        default:printf("Invalid Input");
    }

}
*//*
#include<stdio.h>
int main()
{
    int a,b,res;
    printf("Enter a and b values:\n");
    scanf("%d%d",&a,&b);
    printf("Enter the res value:\n");
    scanf("%d",&res);
    switch(res)
    {
        case 1:printf("%d",a+b);
        break;
        case 2:printf("%d",a-b);
        break;
        case 3:printf("%d",a*b);
        break;
        case 4:printf("%f",(float)a/b);
        break;
        case 5:printf("%d",a%b);
        break;
        default:printf("Invalid input");

    }
}
*//*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value:\n");
    scanf("%d",&a);
    switch(a%2)    {
        case 0:printf("a is even");
        break;
        case 1:printf("a  is odd") ;
        break;
    }
}
*//*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charecter:\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':printf("Vowel");
        break;
        case 'e':printf("Vowel");
        break;
        case 'i':printf("Vowel");
        break;
        case 'o':printf("Vowel");
        break;
        case 'u':printf("Vowel");
        break;
        case 'A':printf("Vowel");
        break;
        case 'E':printf("Vowel");
        break;
        case 'I':printf("Vowel");
        break;
        case 'O':printf("Vowel");
        break;
        case 'U':printf("Vowel");
        break;
        case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':case 'j':case 'k':case 'l':case 'm':case 'n':case 'p':case 'q':case 'r':
        case 's':case 't':case 'v':case 'w':case 'x':case 'y':case 'z':case 'B':case 'C':case 'D':case 'F':case 'G':case 'H':case 'J':
        case 'K':case 'L':case 'M':case 'N':case 'P':case 'Q':case 'R':case 'S':case 'T':case 'V':case 'W':case 'X':case 'Y':case 'Z':
            printf("consonant");
            break;
        default:printf("Its not a alphabet");
    }
return 0;
}*//*

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values:\n");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 0:printf("%d",b);
        break;
        case 1:printf("%d",a);
        break;
        default:("invalid input");

    }
}
*//*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch >= 'a'&& ch <='z')
        printf("alphabet");
    else
        printf("invalied input");
}
*//*ff
#include<stdio.h>
int main()
{
    const int a[]={31,28,31,30,31,30,31,30,31,30,31,30};
    int A;
    printf("Enter the value:");
    scanf("%d",&A);
    if(A>=1 && A<=12)
    {
        printf("%d days",a[A-1]);

    }
    else
        printf("invalid input");
}
*//*

#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,x;
    printf("Enter the number:");
    scanf("%d",&n);

}

*//*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charecter:\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
        break;
        case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':case 'j':case 'k':case 'l':case 'm':case 'n':case 'p':case 'q':case 'r':
        case 's':case 't':case 'v':case 'w':case 'x':case 'y':case 'z':case 'B':case 'C':case 'D':case 'F':case 'G':case 'H':case 'J':
        case 'K':case 'L':case 'M':case 'N':case 'P':case 'Q':case 'R':case 'S':case 'T':case 'V':case 'W':case 'X':case 'Y':case 'Z':
            printf("consonant");
            break;

        default:printf("Its not a alphabet");
    }
return 0;

}*//*
#include<stdio.h>
int main()
{
    int x=4,y=5;
   // scanf("%d%d",&x,&y);
    switch(x)
    {
        case 1:printf("x=%d",x);
        break;
        case 2:printf("x=%d",x);
        //break;
        switch(y){
        case 3:printf("y=%d",y);
        break;
        case 4:printf("y=%d",y);
        break;
         default:printf("Invalid input");
        }
break;
default:printf("X in invalid");
    }
    return 0;
}*//*

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Em ploy ID:\n");
    printf("Enter the password:\n");
    scanf("%d%d",&a,&b);
    switch(a)
    {
    case 55:printf("Name:Joseph\n");
    switch(b){
    case 23:printf("Welcome");
    break;
    default:("Wrong password");
    }break;
    default:("Please try again");

    }

}*//*
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++){
    printf("%d",i);
    }
}
*//*
#include<stdio.h>
int main()
{
    int i=0;
    while(i<5)
    {
        printf("%d",i);
        i++;
    }
return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i;
    do
    {
        printf("%d",i);
        i++;
    }
    while(i<5);
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<5;i++){
    printf("%d",i);
    }
}
*//*
#include<stdio.h>
int main()
{
    int i=1;
    while(i<5)
    {
        printf("%d",i);
        i++;
    }
return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d",i);
        i++;
    }
    while(i<5);
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum=sum+i;

    }
    printf("%d",sum);
}
*//*
#include<stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=5)
    {
         sum=sum+i;
        i++;
    }
    printf("%d",sum);
return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i=1,sum=0;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=5);
        printf("%d",sum);
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int i,sum=1;
    for(i=1;i<=5;i++)
    {
        sum=sum*i;

    }
    printf("%d",sum);
}

*//*
#include<stdio.h>
int main()
{
    int i=1,sum=1;
    while(i<=5)
    {
         sum=sum*i;
        i++;
    }
    printf("%d",sum);
return 0;
}
*//*
#include<stdio.h>
int main()
{
    int i=1,sum=1;
    do
    {
        sum=sum*i;
        i++;
    }
    while(i<=5);
        printf("%d",sum);
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int i,fact=1;
    for(i=1;i<=5;i++)
    fact=fact*i;
            printf("%d",fact);
            //fact=fact*i;
            //i='i!';


    //fact='fact!';
    //printf("%d",fact);
}*/
/*
#include<stdio.h>
int main()
{
    int n,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
*//*
#include<stdio.h>
int main()
{
    int n,num=10;
    scanf("%d",&n);
    for(int i=1;i<=num;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
}
*//*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("sqr=%d\tcube=%d\n",i*i,i*i*i);
    }
}
*//*                                            REVERSE NUMBER
*//*
#include<stdio.h>
int main ()
{
    int  num,rem,rev=0;
    printf("Enter the num:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse number = %d",rev);
}
*//*                                             PALINDROME NUMBER
*//*
#include<stdio.h>
int main ()
{
    int  num,rem,rev=0,temp;
    printf("Enter the num:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if (temp==rev)
        printf("Palindrome number");
    else
        printf("Its not a palindrome number");

}*//*
                                               ARMSTRONG NUMBER
*//*
#include<stdio.h>
int main ()
{
    int  num,rem,rev=0,temp;
    printf("Enter the num:");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev+rem*rem*rem;
        num=num/10;
        printf("rem = %d\n",rem);
        printf("rev = %d\n",rev);
        printf("num = %d\n\n",num);
    }
    if (temp==rev)
        printf("Armstrong number = %d",rev);
    else
        printf("Its not a Armstrong number = %d",rev);
}
*//*                                                ADDITION
*//*
#include<stdio.h>
int main ()
{
    int  num,rem,rev=0;
    printf("Enter the num:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev+rem;
        num=num/10;
        //printf("rem = %d\n",rem);
        //printf("rev = %d\n",rev);
        //printf("num = %d\n\n",num);
    }
        printf("number = %d",rev);

}
*//*                                            INFINITE LOOP
*//*
#include<stdio.h>
int main()
{
    for( ; ;)
        printf("hii");
}
*//*
#include<stdio.h>
int main()
{
    int i=0;
    while(1){
        printf("hii");
        i++;
    }
}
*//*
#include<stdio.h>
int main()
{
    int i=0;
    do{
        printf("hii");
        i++;
    }while(1);
}
*//*
#include<stdio.h>
int main()
{
    int i;
    while(!(i<=10));
    {
        printf("%d",i);
        i++;
    }

}*//*
#include<stdio.h>
int main()
{
    int i=0;
    while(!(i<=10))
    {
        printf("%d",i);
        i++;
    }
    printf("%d",i);
}*//*
                                                    NESTED LOOPS

*//*#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("i=%d\tj=%d\n",i,j);
    }
}
*//*
#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
            printf("i=%d\tj=%d\n",i,j);
            j++;
        }i++;
    }
}
*//*
#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    do
    {
        j=0;
        do
        {
            printf("i=%d\tj=%d\n",i,j);
            j++;

        }while(j<3);
        i++;
    }
    while(i<3);
}
*//*                      LOOP CONTROL STATEMENT IN C
   BREAK
*//*
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++)

    {
        printf("%d",i);
        if(i==5)
        {
            break;
        }
    }
}
*//*
#include<stdio.h>
int main()
{
    int i=0;
    while(i<10)
    {
        printf("%d",i);
        i++;
        if(i==5)
        {
            break;
        }
    }
}
*//*
#include<stdio.h>
int main()
{
    int i=0;
    do
    {
        printf("%d",i);
        i++;
        if(i==5)
        {
            break;

        }
    }while(i<10);
}
*//*
// CONTINUE

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==5){
        continue;
    }
    printf("%d",i);
}
}
*//*
#include<stdio.h>
int main()
{
    int i=0;
    while(i<=10)
    {

        printf("%d",i);
         i++;
        if(i==5)
        {
             i++;
            continue;
        }

    }

}
*//*
#include<stdio.h>
int main()
{
    int i=0;
    do
    {
        printf("%d",i);
        i++;
         if(i==5)
        {
            i++;
            continue;

        }


    }while(i<=10);
}*/

// goto:-
/*
#include<stdio.h>
int main()
{
    int i=10;
    loop: do
    {
        if(i==15){
                i++;
            goto loop;
        }printf("%d",i);
        i++;

    }while(i<=20);
    return 0;
}

*//*
#include<stdio.h>
int main()
{
    int i=10;
    loop:while(i<=20)
    {
        printf("%d",i);
        i++;
        if(i==15)
        {
            i++;
            goto loop;
        }
    }
}
*//*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");


    }
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
*//*

ouput
1
12
123
1234
*//*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*//*

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==n||j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");


    }
    return 0;

}
*/
//                                   ********** FUNCTION **********

