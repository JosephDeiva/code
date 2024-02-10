/*#include<stdio.h>
int main()
{
    int a[5],b[5],c[1],sum=0;
    printf("Enter the value: ");

   // a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i]+b[i];
    }
    //printf("sum=%d\n",sum);
    c[1]=sum;
    printf("c[1]=%d",c[1]);

    return 0;
}
*//*
#include<stdio.h>
void fun();
int main()
{
     int a[5]={1,2,3,4,5};
    // int res=0;
    fun(a);
    return 0;
}

void fun(int b[])
{
    for(int i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }

}
*//*
#include<stdio.h>
typedef int jos;
jos main()
{
    jos a=10;
    printf("%d",a);
    typedef char b;
    b abc='A';
    printf("%c",abc);
}
*//*
#include<stdio.h>
int main()
{
    int a=10,b=9,c;
   // int *p=&a;
    int *p=20;
    //p=&a;
    printf("Value of p=%d\n",a);
    printf("Value of *p=%d\n",*p);
    printf("Size of p=%d\n",sizeof(p));
    printf("Size of*p=%d",sizeof(*p));
}
*//*
#include<stdio.h>
int main()
{
    int a=11,b=10;
    int *ptr;
    ptr=a;
    a=b;
    b=ptr;
    printf("%d %d",a,b);
}
*//*
#include<stdio.h>
int main()
{
    int a=10,b=20,*p;
    *p=a;
    a=b;
    b=*p;
    printf("%d %d",a,b);
}

*//*
#include<stdio.h>
main(void)
{
    int a=10;
    int *p=&a;
    //p++;
    printf("%d\n",*p++);
    printf("%d",p);
}
*//*
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=&a;
    for(int i=0;i<5;i++){

        printf("%d ",*p);
    p++;}
    printf("\n");
    p=&a[4];
    for(int i=0;i<5;i++)
    {
        printf("%d ",*p);
        p--;
    }


}*//*
//..........................ARRAY.....................
#include<stdio.h>
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
   {
       printf("Enter the array values:");
       scanf("%d",&a[i]);

   }
    for(int i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }printf("\n");
    for(int i=2;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}*//*
//.......SUM OF ARRAY.........
#include<stdio.h>
int main()
{
    int a[100];
    int i,n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Element= %d",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("sum value = %d",sum);

}*//*
//........Copy to One array to another array......
#include<stdio.h>
int main()
{
    int a1[3],a2[3];
    for(int i=0;i<3;i++)
    {
        printf("entre the value:");
        scanf("%d",&a1[i]);

    }
    for(int i=0;i<3;i++)
    {
        a2[i]=a1[i];
    }
    //printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",a1[i]);
       // int a2[100]=a1[100];
    }printf("\n");
    for(int i=0;i<3;i++)
    {
        printf("%d ",a2[i]);
    }
return 0;

}*//*//.................SWPPING TWO NUMBER USING POINTER...............
#include<stdio.h>
int main()
{
    int a=10,b=20,*p,*q;
    printf("Before swapping a=%d b=%d\n\n",a,b);
    p=&a;
    q=&b;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("After swapping *p=%d *q=%d\n",*p,*q);
}
*//*
#include<stdio.h>
int main()
{
    int *a=NULL;
    printf("%d",a);
}*//*
#include<stdio.h>
int main()
{
    int a=19;
    int*p=&a;
    int**q=&p;
    int***r=&q;
    int****s=&r;
    int*****t=&s;
    int******u=&t;
    int*******v=&u;
    int********w=&v;
    int*********x=&w;
    int**********y=&x;
    int***********z=&y;
    int************b=&z;
    int*************c=&b;
    int**************d=&c;
    int***************e=&d;

    printf("*p=%d\n",*p);
    printf("p=%d\n",&p);
    printf("**q=%d\n",**q);
    printf("q=%d\n",&q);
    printf("a=%d\n",&a);
    printf("************b=%d\n",************b);//12 times
    printf("*************c=%d\n",*************c);//13 times
    printf("**************d=%d\n",**************d);//14 times
    printf("***************e=%d\n",***************e);//15 times


}
*//*
// FUNCTION CALL BY VALUE
#include<stdio.h>
void fun(int i,int j)
{
    int t;
    t=i;
    i=j;
    j=t;
    printf("After swapping a=%d b=%d\n",i,j);
}
int main()
{
    int a=10,b=20;
    fun(a,b);
    printf("Before swapping a=%d b=%d\n",a,b);
    return 0;
}
*//*
//FUNCTION CALL BY REFERENCE
#include<stdio.h>
void fun(int *i,int *j)
{
    int t;
    t=*i;
    *i=*j;
    *j=t;
    printf("After swapping a=%d b=%d\n",*i,*j);
}
int main()
{
    int a=10,b=20;
    fun(&a,&b);
    printf("Before swapping a=%d b=%d\n",a,b);
    return 0;
}*//*
#include<stdio.h>
int fun()
{
    static int a[5]={1,2,3,4,5};
    return a;

}
int main()
{
    int *r;
    r=fun();
    for(int i=0;i<5;i++)
    {
        printf("%d",*r);
        r++;
    }
    return 0;


}
*//*//IMPLICIT
#include<stdio.h>
int main()
{
    int a=65;
    char b='a';
    float c=10.123;
    int d=(int)c;
    printf("a=%c\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d",d);
}
*///  EXPLICIT
/*
#include<stdio.h>
int main()
{
    int a=10,b=7;
    float c=(float)a/b;
    printf("%f",c);
}
*//*
#include<stdio.h>
main()
{
    float a=13.23;
    char b='A';
    void *ptr;
    ptr=&a;

    printf("%f\n",*(float*)ptr);
    ptr=&b;
    printf("%c",*(char*)ptr);
}
*//*
//Tricky question.

#include<stdio.h>
int main()
{
    int a=9,b=7,c=5;
    printf("%d %d %d");
}
*//*
#include<stdio.h>
int fun(int *r)
{
    printf("After Reverse: ");
    for(int i=5;i>0;i--)
    {

        printf("%d ",*r);
        r--;
}printf("\n");
}

int main()
{
    int a[5];
    int *r;
    printf("Enter the value: ");

    for(int i=0;i<5;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("Before Reverse:");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
        r=&a[i];
    }printf("\n");
    fun(r);

    return 0;
}*//*
#include<stdio.h>
void fun(int a[],int r[])
{
    for(int i=0;i<5;i++)
         r[i]=a[5-1-i];
}
int main()
{
    int arr[5];
    int reversearr[5];
    printf("Enter the element : \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    fun(arr,reversearr);
    printf("The reverse array : \n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",reversearr[i]);
    }

}*//*
#include<stdio.h>
int main()
{
    int a=10,b=98;
    printf("%d",a+=(a+=3,5,a));
}
*///Sum of two array and store in another array.
/*
#include<stdio.h>
int main()
{
    int a[3],b[3],c[3],sum=0;
    printf("Enter the value 'a': ");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter the value 'b': ");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);

    }
    for(int i=0;i<3;i++)
    {
        sum=sum+a[i]+b[i];
    }
    c[3]=sum;
     printf("%d ",c[3]);
}*//*
#include<stdio.h>
int main()
{
    int a[100];
    int n,count=0;
    printf("Enter the N value : ");
    scanf("%d",&n);
    printf("The element are: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }printf("count = %d",count);
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    int x=1,y=0,z=5;
    int a=x&&y&&z++;
    printf("%d%d",z,a);
    printf("%d",z);
}*//*
#include<stdio.h>
int main()
{
    int i=2;
    int b=++i + ++i + ++i;
    printf("%d%d",i,b);
}*//*
#include<stdio.h>
int main()
{
    int i=2,3,4;
    printf("%d",i);
}*//*
#include<stdio.h>
#include"iies.h"
main()
{
    pgde();
    //pgde1();
   //pgde2();
    //pgde3();
    //pgde4();
    return 0;
}
*//*
#include<stdio.h>
int main()
{
    char a[5]={'I','I','E','S','\0'};
    char b[]="HELLO";
    printf("%s %s\n",a);
    for(int i=0;i<5;i++)
    {
        printf("%c",a[i]);

    }
    for(int i=0;i<5;i++)
    {
        printf("%c",b[i]);

    }
}
*//*
#include<stdio.h>
int main()
{
    char a[30]="Deiva";
    printf("%d\n",sizeof(a));
    //gets(a);
    puts(a);
    printf("%d\n",strlen(a));
    printf("%s\n",strupr(a));
    printf("%s\n",strlwr(a));
    printf("%s\n",strrev(a));


    //printf("%s",a);

}*//*
#include<stdio.h>
int main()
{
    char a[30]="India";
    char b[30]=" is great";
    //char c[];
    printf("%s\n",strcat(a,b));
    puts(a);
    puts(b);
}
*//*
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d\n",(n<<3)+n);
    printf("%d",n<<1);
    //getch();
}
*//*
#include<stdio.h>
int main()
{
    int a =5,b=3;
    printf("%d %d\n",a,b);
    a=a^b;
    printf("%d %d\n",a,b);
    b=b^a;
    printf("%d %d\n",a,b);
    a=a^b;
    printf("%d %d",a,b);
}*//*
// Input given from array and get output from pointer.
#include<stdio.h>
int main()
{
    int a[5];
    //int *p;
    //p=&a;
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<5;i++)
        printf("%d ",*(a+i));

}
*//*
//Write a program in c to print all perimulations of a given string using pointer.
#include<stdio.h>
int main()
{
    char str[]="123456";
    int n=strlen(str);
    charPermu(str,0,n-1);
    //printf("\n\n");
    return 0;

}
void charPermu(char *cht,int stno,int endno)
{
    int i,count=0;
    if(stno == endno)
    {
        printf("%s ",cht);
        //count=count+1;
        //if(count)



    }

    else
    {
        for(i=stno;i<=endno;i++)
        {
            changePosition((cht + stno),(cht + i));
            charPermu(cht,stno+1,endno);
            changePosition((cht + stno),(cht+i));

        }
    }//printf("%d",count);
}

void changePosition(char *ch1,char *ch2)
{
    char tmp;
    tmp=*ch1;
    *ch1=*ch2;
    *ch2=tmp;
}
*//*
#include<stdio.h>
void fun(char *a[],char *b[])
{
           printf("%s",strcpy(*a,*b));

}
main()
{
    char a[20]="iies";
    char b[20]="blr";
    char *p,*q;
    p=&a;
    q=&b;
    fun(a,b);
    return 0;

}
*//*
//Write a c program using string to Count the space.
#include<stdio.h>
int main()
{
    char a[50]="Welcome to IIES";
    int count=0;
    for(int i=0;i<50;i++)
    {
        if(a[i]==32)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}*//*
//Withput using string copy to copy the one variable to another variable.
#include<stdio.h>
int main()
{
    char a[10]="abc";
    char b[10],i;

    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    printf("%s",b);
}*//*
#include<stdio.h>
int main()
{
    char a[]="Welcome to iies";
    char b[]="to";
    int i=0;
   // printf("%s\n",strstr(a,b));
    char *p=strstr(a,b);
    while(p[i]!=' ')
    {
        printf("%c",p[i]);
        i++;
    }
}
*//*// Factorial using pointer.
#include<stdio.h>
int main()
{
    int fact,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    findFact(num,&fact);
    printf("The factroial of %d is : %d",num,fact);
    return 0;
}
void findFact(int n,int *f)
{
    int i;
    *f=1;
    for(i=1;i<=n;i++)
        *f=*f*i;
}*//*
#include<stdio.h>
int main()
{
    int i,j,n,k,m,t=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    //scanf(&a,"%d");
    m=n+4-1;
    for(i=1;i<=n;i++)
    {
        for(k=m;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",t++);
        }
        printf("\n");
        m--;
    }//return 0;

}*//*
#include<stdio.h>
int main()
{
    int a[10],b[10];
    for(int i=0;i<3;i++)
    {
        printf("Enter the element %d : ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        printf("Enter the element %d : ",i);
        scanf("%d",&b[i]);
    }
    for(int i=2;i>=0;i--)
        printf("%d%d",a[i],b[i]);

    return 0;
}*//*
#include<stdio.h>
int main()
{
    int a[100],b[100];
    int n,i,j,ctr;
    printf("enter the number to stored in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&a[i]);
        b[i] = - 1;
    }
     for(i=0;i<n;i++)
     {
         ctr=1;
         for(j= i+1;j<n;j++)
         {
             if(a[i]==a[j])
        {
            //printf("%d%d%d ",a[i],a[j],b[j]);
            ctr++;
            b[j]=0;
        }
    }
    if(b[i]!=0)

    {
        b[i]=ctr;

    }
     }
     for(i=0;i<n;i++)
     {
         if(b[i]!=0)
         {
             printf("%d occurs %d times\n",a[i],b[i]);
         }

     }return 0;
}
*/ // Tricky Questions.
/*#include<stdio.h>
int main()
{
    int n=1;
    printf("%d\n",(n<<3)+n);
     printf("%d",(n>>3)+1);
}
*//*
#include<stdio.h>
int main()
{
    int x=150;
    printf("%d %d",x=40,x>=50);
    return 0;
}*//*
#include<stdio.h>
int main()
{
    int x=65;
    switch(x)
    {
        case 'A':printf("yes");
        break;
        case 65:printf("No");
        break;
    }
}*//*
#include<stdio.h>
int main()
{
    int a=5,b=0;
    if(!a&&b)
    {
        printf("True");
    }
    else
    {
        printf("flase");
    }
}*//*
#include<stdio.h>
int main()
{
    int i=0;
    int a[5]={1,2,3,4,5};
    for( i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0 ;
}
*//*
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student ragul;
    struct student gokul;
    struct student joseph;
    printf("Enter the Roll no: ");
    scanf("%d",&ragul.rollno);
    printf("Enter the Name: ");
    scanf("%s",&ragul.name);
    printf("Enter the Marks: ");
    scanf("%f",&ragul.marks);
    printf("\n");

    printf("Enter the Roll no: ");
    scanf("%d",&gokul.rollno);
    printf("Enter the Name: ");
    scanf("%s",&gokul.name);
    printf("Enter the Marks: ");
    scanf("%f",&gokul.marks);
    printf("\n");

    printf("Enter the Roll no: ");
    scanf("%d",&joseph.rollno);
    printf("Enter the Name: ");
    scanf("%s",&joseph.name);
    printf("Enter the Marks: ");
    scanf("%f",&joseph.marks);


    //printf("%d %s %f\n",s.rollno,s.name,s.marks);
    printf("%d",sizeof(struct student));
    return 0;
}
*//*
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;

}s[4];
int main()
{
    //struct student s[4];
    for(int i=0;i<4;i++)
    {
        printf("Enter the roll no: ");
        scanf("%d",&s[i].rollno);
        printf("Enter the name: ");
        scanf("%s",&s[i].name);
        printf("Enter the marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
   for(int i=0;i<4;i++)
    {
        printf("rollno:%d name:%s marks:%f\n",s[i].rollno,s[i].name,s[i].marks);
    }
}*/
/*
// Tricky question

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
}*//*
#include<stdio.h>
typedef struct student a;
struct student
{
    int rollno;
    char name[20];
};
int main()
{
    a  s={101,"ABCD"};
    a  *p=&s;
    printf("%d %s\n",p->rollno,p->name);
    printf("%d %s",(*p).rollno,(*p).name);
}*/
/*
#include<stdio.h>
struct Doj
{
    int dy;
    int m;
    int y;
};
struct employee
{
    int empid;
    char name[20];
    struct Doj d;
};
int main()
{
    struct employee p={1234,"ABCD",7,2,2024};
    printf("ID= %d\nName=%s\nDate of Joining=%d/%d/%d",p.empid,p.name,p.d.dy,p.d.m,p.d.y);
}*//*
#include<stdio.h>
struct nxtipl
{
    char a[20];
    char b[20];
    char c[20];
    char d[20];
};
struct ipl
{
    char teamname[20];
    int no;
    char name[20];
    float rate;
    struct nxtipl m;

};

int main()
{
    struct ipl  a={"Csk",7,"Dhoni",9.8,"Rohith","Virat","Pandiya","Ragul"};
    printf("Team name=%s\nnumber=%d\nCaptain name=%s\nRate of player=%f\nTeam member \n1. %s\n2. %s\n3. %s\n4. %s\n",a.teamname,a.no,a.name,a.rate,a.m.a,a.m.b,a.m.c,a.m.d);

    //printf("No.File=%d File name=%s Size of file=%d",)
}*//*
#include<stdio.h>
//#pragma pack(9)
struct abc
{
    double  a;
    char b;
    double c;
}__attribute((packed))__;
int main()
{
    struct abc s;
    printf("%d",sizeof(s));
}*//*
#include<stdio.h>

struct name
{
    char a[20];
};

struct ipl
{
    char x[20];
    char y[20];
    float z;
    //struct name e;
};

void teamdetails(struct ipl *team1)
{

    printf("Team name: ");
    scanf("%s",&team1->x);
    printf("Team captain: ");
    scanf("%s",&team1->y);
    printf("Team overall rating: ");
    scanf("%f",&team1->z);
}
void teamMembers(struct name *team2)
{
    printf("Team members\n");
     for(int i=1;i<6;i++)
    {
        printf("Player %d: ",i);
        scanf("%s",&team2->a[i]);
    }

}

int main()
{
    typedef struct ipl a;
    a team1;
    struct name team2;


    teamdetails(&team1);
    teamMembers(&team2);

}*/
/*
#include<stdio.h>
//typedef struct student a;
struct student
{
    int rollno;
    char name[20];
};
int main()
{
    struct student s;
    struct student *p=&s;
    printf("Enter the Roll number: ");
    scanf("%d",&p->rollno);
    printf("Enter the Name: ");
    scanf("%s",&p->name);
    printf("%d %s",p->rollno,p->name);
    }

   // printf("%d %s",(*p).rollno,(*p).name);
*//*
#include<stdio.h>
int main()
{
    int a=10,b=5;
    int c;
    if(a>b)
        return 1;
    else
        return 2;
    c=(a>b)? 10: 5;
    printf("%d",c);
}
*//*
#include<stdio.h>
int main()
{
    char a[]={'I','I','E','S','\0'};
    char b[]={'I','I','E','S','\0'};
    if(strcmp(a,b))
        printf("Not same");
    else
    printf("Same");
}
*//*
#include<stdio.h>
union student
{

    int a[5];
    //char d[20];
    //float k;

};
int main()
{
    union student z[5];
    union student *p;
    p=&z;
    for(int i=0;i<5;i++){
        scanf("%d",&p->a);
    //printf("%d %s %ld",s.roll,s.name,s.a);
    //z.a=10;
    //z.d="A";
    //z.k=10.50;
    printf("%d",p->a[i]);}
    //printf("%d",sizeof(z));
}*//*
#include<stdio.h>
int main()
{
    //system("black f4");
    //printf("Hello World");
    //sleep(1);
    for(int i=1;i<20;i++)
    {
        system("color a4");
    //sleep(1);
    system("color b4");
    //sleep(0);
    system("color c4");
    //sleep(1);
    system("color d4");
    system("color e4");
    system("color f4");system("color e4");
    system("color a4");
    system("color b4");
    system("color c4");
    system("color d4");system("color d4");
    system("color e4");
    system("color f4");system("color c4");
    system("color a4");
    system("color b4");
    system("color c4");
    system("color d4");
    system("color e4");
    system("color f4");
    system("color a4");
    system("color e4");
    system("color b4");
    system("color f4");
    }
    //getc(loop);

}*//*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter A value: ");
    scanf("%d",&a);
    printf("Enter B value: ");
    scanf("%d",&b);
    printf("Enter C value: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A is largest number : %d",a);
        }
        else
            printf("C is largest number : %d",c);
    }
    if(b>a)
    {
        if(b>c)
        {
            printf("B is largest number : %d",b);
        }
        else
            printf("C is largest number : %d",c);
    }

}
*/

/*
#include<stdio.h>
int main()
{
    char a[10]="A1";int A1=100;
    if(a==A1)
    {
        printf("%d",A1);
        printf("True");
    }
    else
        printf("False");
}
*/
//BOOKING BUS TICKET
/*
#include<stdio.h>
#include"booking.h"
int main()
{

    ticket();

}
*//*
#include<stdio.h>
struct student
{
    int rollno[5];
    char name[20];
};
int main()
{
    struct student s={1,2,3,4,5,"asd"};
    struct student *p=&s;
    for(int i=0;i<5;i++){
    //printf("Enter the Roll number: ");
    //printf("%d",&p->rollno[i]);
    //printf("Enter the Name: ");
    //printf("%s",&p->name);
    printf("%d ",p->rollno[i]);
    }printf("%s ",p->name);
    printf("%d",p->rollno[2]);
}
*//*
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    union marks
    {
        int m;
    }u[2];
};
int main()
{
    struct student s[2];
    for(int i=0;i<2;i++)
    {
        printf("Roll no:");
        scanf("%d %s",&s[i].rollno,&s[i].name);
        //3printf("Marks");
        for(int j=0;j<2;j++)
            scanf("%d",&s[j].u[j].m);
    }printf("\n");
    for(int i=0;i<2;i++)
        printf("Roll no: %d\nName: %s\nMarks: %d",s[i].rollno,s[i].name,s[i].u[i].m);

}*//*
#include<stdio.h>
struct student
{
    int a;
    int b;
    double c;
}s;
int main()
{
    s.a=10;
    s.b=11;
    s.c=15;
    printf("%d %d %d\n",s.a,s.b,s.c);
    printf("%d",sizeof(s));
}
*//*
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
            printf("%d",a[j]);
    }
}*/
//...........Malloc()............
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",p+i);
    }printf("\n");
    free(p);
    p=NULL;
    for(i=0;i<n;i++)
    {
        printf("%d ",p+i);
    }printf("\n");
}
*/
#include <stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            return a;
            else
            return d;
        }
    }
    if(b>a)
    {
        if(b>c)
        {
            if(b>d)
            return b;
            else
            return d;
        }
    }
    if(c>a)
    {
        if(c>b)
        {
            if(c>d)
            return c;
            else
            return d;
        }
    }
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans=max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
