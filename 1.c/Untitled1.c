/*#include<stdio.h>
int main ()
{
    printf("\** Conditions apply\ ");

    return 0;
}
*//*
#include<stdio.h>
void main()
{
    printf("\"Offers valid until tomorrow\" \n");
    printf("C:\\Users\\My Self\\Desktop\\C\\1.c \n");
    printf("C:\/Users\/My Self\/Desktop\/C\/1.c\n");
    printf("\\\\\\\\TODAY HOLIDAY\\\\\\\\ \n");
    printf("This is a triple quoted string " " \"\"\"This month has30 days\"\"\" " );

    return 0;
}
*//*
 #include<Stdio.h>
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
*//*
#include<stdio.h>

int main()
{
    unsigned short distance_A2B=3215 ;
    unsigned short distance_B2C= 22255;
    unsigned int Total_distance= distance_A2B+distance_B2C;
    unsigned int size=sizeof(Total_distance);
    printf("The total distance is =%d \n",Total_distance);
              printf("The size of short=%ld \n",sizeof(short));
              printf("The size of int=%ld\n",sizeof(int));
              printf("The size of Total_distance=%d\n",sizeof(size));


}
*/
/*
#include<stdio.h>
 void add();
 void mul();

void main()
{
    add();
    mul();


    return 0;


}


void add()
{
    int a=10, b=20;
    int c=a+b;
    printf("The sum of c is =%d\n",c);
}

void mul()
{
    int a=10, b=20;
    int c=a*b;
    printf("The product of c is =%d\n",c);
}
*//*
#include<stdio.h>
#define add(data) data+data
int main()
{
int data= 366/add(10);
data++;
printf("%d",data);
return 0;
}*//*
#include<stdio.h>

int main ()
{
    char ch='a';
    int i=65;
    printf("%c,%d",ch,i);
}*//*
#include<stdio.h>
int main()
{

    printf("%d",printf("%s","hello world "));
    return 0;
}*/
/*
#include<stdio.h>
int main(){
    char c=255;
    c=c+10;
    printf("%d",c);
    return 0;

}
*//*
#include<stdio.h>
int main()
{
    unsigned i=1;
    int j=-2;
    printf("%u",i+j);
    return 0;
}*//*

#include<stdio.h>
int main ()
{
    int i=2147483647;
    int j=2147483650;
    printf("%d\n",i+j);
    unsigned i1=-(i+j);
    printf("%u",(unsigned)i1);
    return 0;
}*//*

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//#define sqrt(data) data+data

int main()
{
    int i=25,b=25;
    printf("total value of d=%f\n",pow(i,b));
    float f=pow(i,b);
    printf("total value of e=%f",cbrt(f));

    return 0;
}*//*

#include<stdio.h>

float pi()
{
    return 3.142;
}

int sum(int a,int b)
{
    printf("a=%d\nb=%d\n",a,b);
    int c;
    c=a+b;
    printf("c=%d\n",c);
    return c;

}

int main()
{
    int x=10,y=20,z;
    printf("The value of PI is 22/7 = %f\n",pi());
    z=sum(x,y);
    printf("Sum of %d and %d is %d",x,y,z);

    return 0;
}*//*
#include<stdio.h>

int sum(int a,int b)
{
    printf("a=%d, b=%d\n",a,b);
    int c;
    c=a-b;
    printf("c=%d\n",c);
    return c;

}
int main ()
{
    int x,y,z;
    printf("Enter the value of:\n");
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    printf("z=%d",z);
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int x=384;
    unsigned char y=x;
    printf("%d",y);
    return 0;
}
*/
/*
#include<stdio.h>
int main ()
{
    int a,b,c,d,e;
    printf("Enter the mark A,B,C,D\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a>=35?printf("PASS=%d\n",a):printf("FAIL=%d\n",a);
    b>=35?printf("PASS=%d\n",b):printf("FAIL=%d\n",b);
    c>=35?printf("PASS=%d\n",c):printf("FAIL=%d\n",c);
    d>=35?printf("PASS=%d\n",d):printf("FAIL=%d\n",d);
    e=a+b+c+d;
    e>140?printf("PASS=%d",e):printf("FAIL=%d",e);

}*/
/*
#include <stdio.h>

enum directions{North=1, East, West, South};

int main(){

    enum directions d,a;
    a=West;
    d=North;

    switch(a){

        case North:

        printf("We are headed towards North.");

        break;

        case East:

        printf("We are headed towards East.");

        break;

        case West:

        printf("We are headed towards West.");

        break;

        case South:

        printf("We are headed towards South");

        break;

    }

    return 0;

}
*//*
#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter 2 numbers:\n");
   scanf("%d%d",&a,&b);
   int c=(a>b)?a:b;
   printf("Largest value:%d",c);
   return 0;
}*//*
#include<stdio.h>
struct docs
{
    int x;
    char y;
};
int main()
{
    struct docs doc;
    printf("%d",sizeof(doc));
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int a=2,b=2,x,y;
    x=4 * (++a * 2 + 3);
    y=4 * (b++ * 2 + 3);
    printf("a=%d\nb=%d\nx=%d\ny=%d",a,b,x,y);
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=b=c=d=4;
    a *= b + 1;
    c += d *= 3;

    printf("%d\n%d\n%d\n%d\n",a,b,c,d);
    return 0;


}*//*
#include<stdio.h>
int main()
{
    int a=3,b=4,c=3,d=4,x,y;
    x=(a==6)&&(b==9);
    y=(c==6)||(d==10);
    printf("%d\n%d\n%d\n%d\n\n",a,b,c,d);
    printf("%d\n%d\n",x,y);
    printf("%d",a&&b);
    return 0;

}*//*

#include<stdio.h>
int main()
{
    int a=0,b=97;
    printf("%d\n",a&&b);
    printf("%d",a||b);
}
*//*
#include <stdio.h>
int  IsLeapYear(int year)
{
    // Function to check leap year.
    if (year % 4 != 0)
        return 0;
    if (year % 100 != 0)
        return 1;
    return (year % 400) == 0;
}
int main()
{
    unsigned int uiYear=0;
    printf("Enter the year:");
    scanf("%u",&uiYear);
    (IsLeapYear(uiYear)? printf("Leap Year."): printf("Not Leap Year."));
    return 0;
}
*//*
#include<stdio.h>
int main ()
{
    unsigned int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("LEAP YEAR");
    }
    else
        printf("NO LEAP YEAR");
}
*//*

#include<stdio.h>

int cricket(int x,int y)
{
    int a = x + y;
    return a;
}

int main()
{
    int x, y;
    printf("Enter the values: ");
    scanf("%d %d", &x, &y);
    int result = cricket(x, y);
    printf("Result: %d", result);
    return 0;
}
*//*

#include<stdio.h>
int main ()
{
    int amount;
    int note500,note100,note50,note20,note10,note5,note2,note1;
    note500=note100=note50=note20=note10=note5=note2=note1=0;
    printf("enter the amount:");
    scanf("%d",&amount);
    if(amount>=500)
    {
        note500=amount/500;
        amount -= note500 * 500;
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount -= note100 * 100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount -= note50 * 50;
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount -= note20 * 20;
    }
    if(amount>10)
    {
        note10=amount/10;
        amount -= note10 * 10;
    }
    if(amount>=5)
    {
        note5=amount/5;
        amount -= note5 * 5;
    }
    if(amount>=2)
    {
        note2=amount/2;
        amount -= note2 * 2;
    }
    if(amount>=1)
    {
        note1=amount/1;
        amount -= note1 * 1;
    }
    printf("Total no of notes=\n");
    printf("500=%d\n",note500);
    printf("100=%d\n",note100);
    printf("50=%d\n",note50);
    printf("20=%d\n",note20);
    printf("10=%d\n",note10);
    printf("5=%d\n",note5);
    printf("2=%d\n",note2);
    printf("1=%d\n",note1);

    return 0;


}*//*
#include<stdio.h>
int main ()
{
    int a,b,c,sum;
    printf("Enter the triangle value:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180 && a>0 && b>0 &&c>0)
        printf("Triangle is valid");
    else
        printf("Triangle is invalid");

    return 0;
}
*//*
#include<stdio.h>
int main()
{
    char a[50];
    int b,c,d;
    printf("enter the character:");
    scanf("%s",&a);

    printf("enter the value:");
    scanf("%d%d%d",&b,&c,&d);

    printf("Name:%s\nDOB:%d/%d/%d",a,b,c,d);

    return 0;
}*//*
#include<stdio.h>
int main()
{
    printf("C version:%ld",__STDC_VERSION__);

    return 0;
}*//*
#include<stdio.h>
int main()
{
    int i,j;
    int height=8;
    for(i = 0;i< height;i++){
        for(j=0;j<height;j++){
            if(i==0 || j==0 || i==height/2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int a,b,x,y;
    printf("enter the value:\n");
    scanf("%d%d",&a,&b);
    x= (2*a) + (2*b);
    y= a*b;
    printf("Perimeter of retangular=%d\n",x);
    printf("Area of retangular=%d",y);
    return 0;

}*//*
#include<stdio.h>
#define pi 3.14159
int main()
{
    float a,x,y;
    printf("enter the value:\n");
    scanf("%f",&a);
    x= 2*pi*a;
    y= pi*a*a;
    printf("Perimeter of circle=%f inches\n",x);
    printf("Area of circle=%f squar inches",y);
    return 0;

}
*//*
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0;i<=7;i++)
    {
        printf("%d",i);
        sum=sum+i;
    }
    printf("\nThe sum of natural upto 7 terms=%d",sum);
}
*//*
#include<stdio.h>
int main()
{
    int i,sum=0;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=7);
    printf("The sum of natural upto 7 terms=%d",sum);
}
*//*
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter the 10 numbers:\n");
    for(i=1;i<=10;i++)
    {
        printf("Number-%d:",i);
        scanf("%d",&n);
        sum+=n;
    }
    avg=sum/10.0;
    printf("The sum value=%d\nAverage values=%f",sum,avg);

    return 0;
}*//*
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Number is: %d and cube of the %d= %d\n",i,i,i*i*i);
    }
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
}*//*
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",2*i-1);
        sum+=2*i-1;
        }

    printf("\n%d",sum);

}*//*

#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",k++);
        printf("\n");
    }
}
*//*
#include<stdio.h>
#include<math.h>

int main()
{
    int n1,onum,r,result=0,n=0;
    printf("Input an integer:");
    scanf("%d",&n1);
    onum=n1;
    while(onum !=0)
    {
        onum/=10;
        ++n;
        printf("onum=%d\t",onum);
        printf("n=%d\n",n);
    }
    onum=n1;
    while(onum!=0)
    {
        r=onum%10;
        result+= pow(r,n);
        onum/=10;
        printf("r=%d\n",r);
        printf("Result=%d\n",result);
        printf("Onum=%d\n",onum);

    }
    if(result==n1)
        printf("%d is an Armstrong number,\n\n",n1);
    else
    printf("%d is not an Armstrong number,\n\n",n1);
    return 0;

}
*//*
# Write a C program to convert specifed day into years,weeks and days.
NOTES:Ignore leap year.
*//*

#include<stdio.h>
int main()
{
    int days,years,weeks;
    printf("Enter the days :");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));

    printf("Year = %d\n",years);
    printf("Weeks = %d\n",weeks);
    printf("Days = %d",days);

    return 0;

}
*//*
# write a C program that accepts two integer from the user and calculate the sum of the two integers.
*/ /*
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Input the first integer:");
    scanf("%d",&a);
    printf("Input the second integer:");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum of the above two integer: %d",sum);
}
*//*
# Write a C program that accepts two integer from the user and calculate the product of the two integers.
*//*
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Input the first integer:");
    scanf("%d",&a);
    printf("Input the second integer:");
    scanf("%d",&b);
    sum=a*b;
    printf("Sum of the above two integer: %d",sum);
}
*//*
# Write a C program that accepts two item's weight and number of purchases(Floating point values)and calculates their average value.
*//*
#include<stdio.h>
int main()
{
    float w1,n1,w2,n2,result;
    printf("Weight-item1:");
    scanf("%f",&w1);
    printf("No.of item1:");
    scanf("%f",&n1);
    printf("Weight-item2:");
    scanf("%f",&w2);
    printf("No.of item2:");
    scanf("%f",&n2);
    result=((w1*n1)+(w2*n2))/(n1+n2);
    printf("Average value = %f\n",result);

    return 0;


}
*//*
#include<stdio.h>
int main()
{
    char a[10];
    int x;
    double y,sum;
    printf("Employees ID: ");
    scanf("%s",&a);
    printf("Working hrs: ");
    scanf("%d",&x);
    printf("Salary amout/hr: ");
    scanf("%lf",&y);
    sum=x*y;
    printf("\nEmployees ID: %s\n",a);
    printf("Salary = U$ %lf",sum);


}
*//*
#include<stdio.h>
int main()
{
    float x,sum,no_row;
    int i,n;
    printf("Input the value of x : ");
    scanf("%f",&n);
    printf("Input number of terms : ");
    scanf("%d",&n);
    sum=1;
    no_row=1;

    for (i=1;i<n;i++);
    {
        no_row=no_row*x/(float)i;
        sum = sum+no_row;

    }
    printf("\nThe sum is : %f",sum);

    return 0;

}*/
/*
#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    printf("Weight of items: ");
    scanf("%d",&a);
    printf("No.of items: ");
    scanf("%d",&b);
    printf("Weight of items: ");
    scanf("%d",&c);
    printf("No.of items: ");
    scanf("%d",&d);
    sum=((a*b)+(c*d))/(b+d);
    printf("Average value of item: %d",sum);

    return 0;

}
*//*
#include<stdio.h>
#include<stdint.h>
int main()
{
    uint8_t myNumbers[10]={20,34,78,42,100};
    //uint32_t length_of _size = sizeof( myNumber)/sizeof( uint8_t);
    for(uint32_t i=0;i<10;i++)
    {
        printf("%d\n", myNumbers[i]);
    }
    //printf("%d\n",length_of _size);

     return 0;
}
*/
// CALLING FUNCTION
/*
#include<stdio.h>
int max(int num1, int num2)
{
    int result;
    if(num1>num2)
        result = num1;
    else
        result=num2;

    return result;
    }
    //int max(int num1, int num2);
int main()
{
    int a=200,b=400,ret;
    ret = max(a,b);
    printf("Max value is : %d\n",ret);

return 0;
}
*//*
 DISTANCE BETWEEN TWO POINTS

*//*
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    float distance;
    printf("Enter the x1: ");
    scanf("%d",&x1);
    printf("Enter the y1: ");
    scanf("%d",&y1);
    printf("Enter the x2: ");
    scanf("%d",&x2);
    printf("Enter the y2: ");
    scanf("%d",&y2);
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance btw two point= %f",distance);

    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int amt,total;
    printf("Enter the amount; ");
    scanf("%d",&amt);
    total=amt/1000;
    printf("1000 notes = %d\n",total);
    amt=amt-(total*1000);
    total=amt/500;
    printf("500 notes = %d\n",total);
    amt=amt-(total*500);
    total=amt/100;
    printf("100 notes = %d\n",total);
    amt=amt-(total*100);
    //printf("%d\n",amt);
    total=amt/50;
    printf("50 notes = %d\n",total);
    amt=amt-(total*50);
    total=amt/20;
    printf("20 notes = %d\n",total);
    amt=amt-(total*20);
    total=amt/10;
    printf("10 notes = %d\n",total);
    amt=amt-(total*10);
    total=amt/5;
    printf("5 notes = %d\n",total);
    amt=amt-(total*5);
    total=amt/2;
    printf("2 notes = %d\n",total);
    amt=amt-(total*2);
    total=amt/1;
    printf("1 notes = %d\n",total);
    amt=amt-(total*1);
    return 0;
}
*//*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("\n\nIs command processor available?\n");
    if(system(NULL))
    {
        printf("Command processor available!\n");
    }
    else
    {
        printf("Command processor not available!\n");
        exit(1);
    }
    printf("Executing command DIR\n");
    x=system("dir");
    printf("Returned value is: %d.\n",x);

    return 0;

}
*//*
#include<stdio.h>
int main()
{
    int j,n[5],t=0;
    printf("input number: ");
    scanf("%d",&n[0]);
    printf("input number: ");
    scanf("%d",&n[1]);
    printf("input number: ");
    scanf("%d",&n[2]);
    printf("input number: ");
    scanf("%d",&n[3]);
    printf("input number: ");
    scanf("%d",&n[4]);

    for(j=0;j<5;j++)
    {
        if((n[5]%2)!=0)
            t+=n[j];
            printf("Sum of all odd value: %d",t);

    }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==n||j==n||i==1)
               printf("*");
            else
               printf(" ");
        }

    printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("*");
    }
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int m=10,n,o;
    int *z=&m;
    printf("Here is m=10,n and o are two integer variable and *z is an integer\n");
    printf("\nz stores the address of m = %p\n",z);
    printf("\n*z stores the value of m = %i\n",*z);
    printf("\n&m is address of m = %p\n",&m);
    printf("\n&n is address of n = %p\n",&n);
    printf("\n&o stores the address of o = %p\n",&o);
    printf("\n&z stores the address of z = %p\n\n",&z);

}
*//*
#include<stdio.h>
int numPrint(int);
int main()
{
    int i=1;
    printf("The natural numbers are: ");
    numPrint(i);
    //printf("\n%d\n",numPrint(i));

    return 0;
}

int numPrint(int n)
{
    if(n<=50)
    {
        printf("%d  ",n);
        numPrint(n+1);
    }
}
*//*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Ente the N value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
        {
           // printf(" * ");
       //printf("\n");
       if(i=1||j==1||i==n||j==n)
        printf(" * ");
       }

    }
    return 0;
    }
*//*
#include<stdio.h>
int main()
{
    for(int i=0;i<=10;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==0||j==0||i==10||j==i)
               printf("@");
            else if(i==3||j==3||j==i)
                printf("<>");
            else if(i==4||j==4||j==i)
            {
                if(i==9||j==9||j==i)
                    printf("$$");

            }
                 printf("??");
                  else
                printf(" ");




        }

        printf("\n");
    }

    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int decimalNumber;
    printf("Enter the decimal number: ");
    scanf("%d",&decimalNumber);
    decimalToBinary(decimalNumber);
    return 0;
}
void decimalToBinary(int decimalNumber)
{
    int binaryNumber[32];
    int i=0;

    while(decimalNumber>0)
    {
        binaryNumber[i]=decimalNumber%2;
        decimalNumber=decimalNumber/2;
        //i++;
        printf("BinaryNumber=%d\n\n",binaryNumber[i]);
        printf("DecimalNumber=%d\n\n",decimalNumber);
        printf("i++ = %d\n\n",i++);

    }
    printf("Binary equivalent: ");

    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binaryNumber[j]);
    }
}
*/

