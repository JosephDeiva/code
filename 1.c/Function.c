//  ****** FUNCTION ******
/*
Function type-> 4

1.Function with argument & with return type.
2.Function with argument & without return type.
3.Function without argument & with return type.
4.Function without argument & without return type.
*/
//4.Function without argument & without return type.
/*
#include<stdio.h>
void alphabet();
int main()
{
    alphabet();
}

void alphabet()
{
    char ch;
    printf("Enter the character ch: ");
    scanf("%c",&ch);
    printf("%d = %c",ch,ch);
}
*/
//1.Function with argument & with return type.
/*
#include<stdio.h>

char alphabet(char);
int main()
{
    char ch,ret;
    printf("Enter the character ch: ");
    scanf("%c",&ch);
    ret=alphabet(ch);//Actual argument or actual parameter.
    printf("%c",ret);
}

char alphabet(char ch1)//Formal argument or formal parameter.
{
    return ch1+1;
}
*/
//2.Function with argument & without return type.
/*
#include<stdio.h>

void alphabet(char ch);
int main()
{
    char ch;
    printf("Enter the character ch: ");
    scanf("%c",&ch);
    alphabet(ch);

}

void alphabet(char ch)
{
    printf("%c",ch);
}
*/
//3.Function without argument & with return type.
/*
#include<stdio.h>

char alphabet();

int main()
{
    char ret =alphabet();
    printf("%c",ret);

}

char alphabet()
{
    char ch;
    printf("Enter the character ch: ");
    scanf("%c",&ch);
    return ch;
}
*/
//1.Write a c program in given two input from user and multipul in float condition using Function with argument & with return type .
/*
#include<stdio.h>

float mul(float a, float b);
int main()
{
    float a,b;
    printf("Enter the value a: ");
    scanf("%f",&a);
    printf("Enter the value b: ");
    scanf("%f",&b);


    float ret= mul(a,b);
    printf("%f",ret);

}

float mul(float a,float b)
{
    return a*b;
}
*/

/*
#include<stdio.h>

void mul();
int main()
{
    mul();
}

void mul()
{
    float a,b;
    printf("Enter the value a: ");
    scanf("%f",&a);
    printf("Enter the value b: ");
    scanf("%f",&b);
    printf("%f",a*b);
}
*//*
#include<stdio.h>

float mul();
int main()
{
   float ret= mul();
    printf("%f",ret);
}

float mul()
{
    float a,b;
    printf("Enter the value a: ");
    scanf("%f",&a);
    printf("Enter the value b: ");
    scanf("%f",&b);

    return a*b;

}
*//*
#include<stdio.h>
void mul(float a,float b);
int main()
{
    float a,b;
}
*//*
#include<stdio.h>

void add();
int main()
{
    sum();
}
void sum()
{
    int i=1 ,sum=1;
    for(i=1;i<=5;i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);

}*/

//write aprogram in C to find the simple structure of a function
// Exepected output: The total is : 11
/*
#include<stdio.h>
void sum();
int main()
{
    sum();
}

void sum(int a)
{
    a=11;
    printf("The total is : %d",a);
}*/
//without arg & with return value.
/*
#include<stdio.h>

int sum();
int main()
{
    int ret =sum();
    printf("The total is : %d",ret);

}

int sum(int a)
{
    //int a;
    a=11;
    //printf("Enter the integer : ");
    //scanf("%d",&a);
    return a;
}*/
//with arg &without return value.
/*
#include<stdio.h>
void sum();
int main()
{
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    sum(a);
}

void sum(int a)
{
    printf("The total value : %d",a);
}
*/
//With arg and with return value.
/*
#include<stdio.h>
int sum(int);
int main()
{
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    int c=sum(a);

    printf("%d",sum(a));

}

int sum(int c)
{

    return c;

}
*//*

#include<stdio.h>

void swap(int , int );
int main(void)
{
    int a,b;
    printf("enter the value a: ");
    scanf("%d",&a);
    printf("enter the value b: ");
    scanf("%d",&b);
    printf("Before Swapping a = %d\tb = %d\n",a,b);

     swap(a,b);

    return 0;
}

void swap(int a,int b)
{
    //int a,b;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping a = %d\tb = %d\n",a,b);


   //int tmp;
   //tmp=a;
   //a=b;
   //b=tmp;



    //return a,b;
   //printf("After Swapping a = %d\tb = %d",a,b);

}
*/
//Expected output odd or even
/*
#include<stdio.h>
int num(int);
int main()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    num(a);
    if (a%2==0)
        printf("%d is Even number",num(a));
    else
        printf("%d is Odd number",num(a));

}
int num(int a)
{
    return a;
}
*/
/*
#include<stdio.h>
int fact(int);
int main ()
{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("The sum of the series is : %d",sum);
}

int fact(int n)
{
    int num=0,f=1;
    while(num<=n-1)
    {
        f=f+f*num;
        num++;
    }
    return f;

}
*//*
#include<stdio.h>
int sqrt();
int main()
{
    int a;
    int res=sqrt(a);
    printf("squar root is %d",res);
}

int sqrt()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    //int res=pow(a,2);


    return a*a;
}*/
/*
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the value a: ");
    scanf("%f",&a);
    printf("sqrt %f",a*a);
    printf("power %f\n",pow(a,3));
}*/
/*
#include<stdio.h>
int Primeornot(int);

int main()
{
    int a,prime;
    printf("Enter the value a : ");
    scanf("%d",&a);
    prime=Primeornot(a);
    if(prime==1)
        printf("The number %d is prime number.\n",a);
    else
        printf("The number %d is not prime number.\n",a);
}

int Primeornot(int a)
{
    int b=2;
    while(b<=a/2)
    {
        if(a%b==0)
            return 0;
        else
            b++;
        printf("b=%d\n",b);

    }
    return 1;

}*/
/*
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
#include<stdio.h>

int isArmstrong(int number)
{

  // declare variables
  int lastDigit = 0;
  int power = 0;
  int sum = 0;

  // temporary variable to store number
  int n = number;

  while(n!=0) {

     // find last digit
     lastDigit = n % 10;

     // find power of digit (order = 3)
     power = lastDigit*lastDigit*lastDigit;

     // add power value into sum
     sum += power;

     // remove last digit
     n /= 10;
  }

  if(sum == number) return 0;
  else return 1;
}

int main()
{
  int number;

  printf("Enter number: ");
  scanf("%d",&number);

  if(isArmstrong(number) == 0)
  printf("%d is an Armstrong number.\n", number);
  else
  printf("%d is not an Armstrong number.", number);

  return 0;
}
*/
/*
//Function w/o arg &w/o return value.
#include<stdio.h>

void cube();

int main()
{
    cube();

}

void cube()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("cube number is : %d",a*a*a);
}
*//*
//Function with arg & with return value.
#include<stdio.h>

int cube(int);
int main()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    cube(a);
    printf("cube number is : %d",cube(a));

}

int cube(int a)
{
    return a*a*a;
}
*//*
//Function with arg & w/o return value.
#include<stdio.h>

void cube(int);
int main()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    cube(a);

}

void cube(int a)
{
    printf("cube number is : %d",a*a*a);
}
*/
//Function w/o arg & with return value.
/*
#include<stdio.h>

int cube();

int main()
{

    printf("%d",cube());

}

int cube()
{
    int a,ret;
    printf("Enter the value a: ");
    scanf("%d",&a);

    return a*a*a;

}*/
//Call by value.
/*
#include<stdio.h>

void swap(int ,int);
int main()
{
    int a,b;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    printf("Before swapping: a=%d\tb=%d\n",a,b);
    swap(a,b);
    printf("In main a=%d\tb=%d\n",a,b);

}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping: a=%d\tb=%d\n",a,b);
}
*/
//Call by reference
/*
#include<stdio.h>

void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    printf("Before swapping: a=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("In main a=%d\tb=%d\n",a,b);

}
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("After swapping: a=%d\tb=%d\n",*a,*b);
}
*//*
#include<stdio.h>
void num(int);
int main()
{
    int a;
    printf("Enter the value a:");
    scanf("%d",&a);
    num(a);
    // printf("%d",a);
}
void num(int a)
{
    int b;
    for(b=0;b<=a;b++)
    {
        if(a%b==0)
            printf("%d",b);

    }
}*//*
#include<stdio.h>
int primeornot(int);
int main()
{
    int a,prime;
    printf("Enter the value a:");
    scanf("%d",&a);
    prime=primeornot(a);
    if(prime==0)
        printf("Its prime number=%d",prime);
    else
         printf("Its not prime number=%d",prime);

}
int primeornot(int a)
{
    int b,flag=0;
    for(b=2;b<=a/2;b++)
    {
        if(a%b==0)
           flag=1;
    }
    return flag;
}*/

//                                              RECURSION

/*//Sum of first 5 number.

#include<stdio.h>

int add(int a);
int main()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("num=%d",add(a));

}


int add(int a)
{
    if(a!=0)
        return a+add(a-1);
    else
        return a;
}
*/
//Factorial recursion in c
/*
#include<stdio.h>
int fact(int);

int main()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    printf("num=%d",fact(a));

}


int fact(int a)
{
    if(a==1) //if(a<=0) or if(a==1||a<0) This condition also same.
        return 1;

    return a*fact(a-1);

}
*/
//                                                 FIBONACCI SERIES
//Fibonacci series using in trec recursion.
/*
#include<stdio.h>
int fibo(int);

int main()
{
    int a;
    printf("Enter the value a: ");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    printf("%d",fibo(i));

}


int fibo(int a)
{
    if (a==0)
        return 0;
    if(a==1) //if(a<=0) or if(a==1||a<0) This condition also same.
        return 1;

    return fibo(a-1)+fibo(a-2);

}*/

//Direct recursion in head
/*
#include<stdio.h>
void direct(int);
int main()
{
    int  n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    direct(n);
}
void direct(int n)
{
    if (n>0)
    {
        printf("%d\n",n);
        direct(n-1);
    }
}
*/
//                                          INDIRECT RECURSION
/*
#include<stdio.h>
int main()
{
    fun1(10);
}
void fun1(int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun2(n/2);
    }
}
void fun2(int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun1(n/2);
    }
}
*/
// LINEAR :-
/*
#include<stdio.h>
int fun(int);
int main()
{
    printf("%d",fun(5));
}
int fun(int n)
{
    if(n>0)
        return n+fun(n-1);

}
*/
// Whatever you enter the number its Count the no.of 1's in this binary numbers.
/*
#include<stdio.h>
//int countOnes(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",countOnes(n));
    return 0;
}

int countOnes(int n)
{
    int count=0;
    while(n){
        count=count+(n&1);
        printf("n=%d\n",n);
        n>>=1;
    }return count;
}
*/
//Find the bit.
/*
#include<stdio.h>
int findBit(int ,int);
int main()
{
    int n,k=2;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("%d-th bit of %d is %d\n",k,n,findBit(n,k));
}

int findBit(int n,int k)
{
    return ((n>>(k-1))&1);
}
*/
//Set the bit.
/*
#include<stdio.h>
int setBit(int ,int);
int main()
{
    int n,k=2;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("Setting %dth bit modifies N to %d",k,setBit(n,k));
}

int setBit(int n,int k)
{
    return (n|(1<<(k-1)));
}
*/
//Toggling bit.
/*
#include<stdio.h>
int setBit(int ,int);
int main()
{
    int n,k=2;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("Toggling %dth bit modifies N to %d",k,setBit(n,k));
}

int setBit(int n,int k)
{
    return (n^(1<<(k-1)));
}
*/
//Clear bit.
/*
#include<stdio.h>
int clearbit(int ,int);
int main()
{
    int n,k;
    printf("Enter the n value : ");
    scanf("%d",&n);
    printf("Enter the k value : ");
    scanf("%d",&k);
    printf("Clearing %dth bit modifies N to %d",k,clearbit(n,k));

}
int clearbit(int n,int k)
{
    return(n&(~(1<<(k-1))));
}
*/
//Replace bit.
/*
#include<stdio.h>
int replaceBit(int ,int,int );
int main()
{
    int n,k=2,p=1;
    printf("Entre the n value: ");
    scanf("%d",&n);
    printf("Replacing the %d bit with %d modifies N to %d",k,p,replaceBit(n,k,p));
}
int replaceBit(int n,int k,int p)
{
    return (n|(p<<(k-1)));
}
*/
/*
#include<stdio.h>
int main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    int i=0;
    auto int j=0;
    register k=0;
    static l=0;
    i++;
    j++;
    k++;
    l++;
    printf("i=%d\n",i);
    printf("j=%d\n",j);
    printf("k=%d\n",k);
    printf("l=%d\n\n",l);

}
*//*
#include<stdio.h>
void func(void);
static count=5;
int main()
{
    while(count--)
        func();
}

void func()
{
    static int i=5;
    i--;
    printf("i is %d and count is %d\n",i,count);
}
*//*
#include<stdio.h>
extern s;
int main()
{
    printf("%d",s);
    disp();
    printf("BUDDY");
}
*/
