/*#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i;
    for(i=0;i<argc;i++)
    printf("%d=%s\n",i,argv[i]);
}
*//*
#include<stdio.h>
enum programming
{
    Sunday=1,Monday,Tuesday,Wensday,Thursday,Friday,Saturday
};
int main()
{
    int a;
   loop: scanf("%d",&a);
    enum programming language;
    language=a;
    switch(language)
    {
        case Sunday:printf("Mansore");
        break;
        case Monday:printf("Salem");
        break;
        case Tuesday:printf("Bangalure");
        break;
        case Wensday:printf("kolkatta");
        break;
        case Thursday:printf("Thailand");
        break;
        case Friday:printf("France");
        break;
        case Saturday:printf("SouthAfrica");
        break;
        default:if(language>7)
        {
            printf("Enter a value in (1-7)\nEnter Again: ");
            goto loop;
    }

    //switch()
    //printf("=%d\n",language);
    //printf("%d",sizeof( language));
}
}*//*
//Enumerated
#include<stdio.h>
enum prog
{
    a,b,c
};
int main()
{
    int d=a||b||c;
    printf("%d ",d);
}
*//*
//FILE I/O
#include<stdio.h>
int main()
{
    FILE *ptr;
    char a;
    a=fgets(ptr);
    //ptr=fopen("abcd.text","w");
    //ptr=fopen("abcd.doc","w");
    ptr=fopen("abcd.xls","w");
    if(ptr!=NULL)
    {
        fputs("Xerox",ptr);
        fputc('X',ptr);
    }

    else
        printf("File not found");
    fclose(ptr);
}*/
/*
//Rename the file.
//Delete the file .
#include<stdio.h>
int main()
{
    //rename("abcd.csv","Hello.csv");
    remove("Hello.csv");
}
*//*
#include<stdio.h>
enum Auto
{
    valvo,benz,audi

};
int main()
{
    int a;
    enum Auto sel;
   loop: printf("Entre the choice: ");
    scanf("%d",&a);
    sel=a;
    switch(sel)
    {
        case valvo:printf("ASDF");
        break;
        case benz: printf("WETR");
        break;
        case audi:printf("FDFSDS");
        break;
        default:{printf("Invalid sel\n Enter Again: ");
        goto loop;}
    }
}
*//*
#include<stdio.h>
int main()
{
    char a[100];
    printf("Enter the value:");
    scanf("%[^\n]s",&a);
    printf("%s",a);
}*//*
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Hello.doc","w");
    char a;

    a=fgetc(ptr);

    if(ptr!=NULL)
    {
         printf("%c",a);
    }

    else
        printf("File not found");
    fclose(ptr);
}
*//*
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Hello.doc","r");
    char a;
    int b;
    char c[20];
    //fprintf(ptr,"%c %d %s",'A',10,"Hello");
    fscanf(ptr,"%c %d %s",&a,&b,&c);
    printf("%c %d %s",a,b,c);
    //fputc("2",ptr);
    //char a[20];
    //fgets(a,sizeof(a),ptr);
    //printf("%c %d %s",*a);

    fclose(ptr);
}*/
/*
#include<stdio.h>
int main()
{
    int i,j;
    int a[2][3]={1,2,3,4,5,6};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    }
}*//*
#include<stdio.h>
int main()
{
    FILE *ptr;
    char a[20];
    int b;
    ptr=fopen("Hello.doc","w");
    for(int i=0;i<2;i++)
    {
        printf("Enter the name: ");
        scanf("%s",&a);
        printf("Enter the marks: ");
        scanf("%d",&b);
        fprintf(ptr,"%s %d\n",a,b);
    }
    fclose(ptr);
}
*//*
//File processing
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("File.text","w+");
    fputs("Welcome to IIES",ptr);
    fseek(ptr,5,SEEK_SET);
    printf("%d ",ftell(ptr));
    //fputs("Bangalure",ptr);
    rewind(ptr);
    //printf("%d",ftell(ptr));
    fclose(ptr);
}
*//*
#include<stdio.h>
#include<errno.h>
int main()
{
    FILE *ptr;
    ptr=fopen("To.text","r");
    printf("%d",errno);
}
*//*
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Example 0.text","r");
    char a[50];
    if(ptr==NULL)
    {
        printf("File not found");
        exit(1);
    }
   // if(a==' '||a==a)

        fgets(a,sizeof (a),ptr);
        printf("%s",a);

    //fscanf(ptr,"%s",&a);
    //fgets(a,sizeof a,ptr);
    //fprintf(ptr,"%s",a);
    //printf("%s",a);
    fclose(ptr);
}
*//*
//Write a message in new file using file handling.
#include<stdio.h>
int main()
{
    FILE *ptr;
    char fileName[100];
    ptr=fopen("Example 0.text","w");
    for(int i=0;i<5;i++)
    {
        printf("Enter here: ");
        scanf("%[^\n]s",&fileName);
        fprintf(ptr,"%s\n",fileName);
    }

   // fgets(fileName,sizeof(fileName),ptr);
    //printf("%s",fileName);
}
*//*
#include<stdio.h>
#include<errno.h>
int main()
{
    FILE *ptr;
    //char a[20];
    ptr=fopen("to.text","w");
    //fputs("Welcome to IIES",ptr);
    if(EOF!=NULL)
    {
        fputs("Welcome to IIES",ptr);
        //fgets(a,sizeof(a),ptr);

    }
    else
        printf("File not found");

    //printf("%s\n",strerror(errno));
   // perror("Error:");
}
*//*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("to.text","r");
    fputs("Hii\n",ptr);
   // for(int i=0;i<4;i++)

        if(ptr!=NULL){
        puts("Welcome to IIES\n");
        exit(EXIT_SUCCESS);
        }
        else
            perror("msg");
        exit(EXIT_FAILURE);

    // perror("Error:");
    fclose(ptr);
}*//*
#include<stdio.h>
#define fun(a,b) if(a>b)\
                    printf("A is greater then b");\
                 else\
                        printf("B is greater then A");
int main()
{
   int a=10,b=20;

    fun(a,b);
}
*//*
#include<stdio.h>
#define A 20
#ifdef A
//#ifndef A
#endif // A
#define A 56
#define B 20
int main()
{
    #if A>B

        printf("A is greater");
    #elif A<B
         printf("B is greater");
    #else
        printf("Same");
    #endif // A

}
*//*
#include<stdio.h>
#define a 10
#define b 20
int main()
{
    #if a<b
        #error HELLO
    #endif // a
}
*//*
#include<stdio.h>
#include<stdarg.h>
void fun(int cnt,...)
{
    va_list a;
    int t=0,b;
    va_start(a,cnt);
    for(int i=1;i<=cnt;i++)
    {
        b=va_arg(a,int);
        if(b%2==0)
            printf("%d",b);

    }

    va_end(a);

}
int main()
{
    int r;
    fun(5,1,2,3,4,5);
   // printf("%d\n",r);
   // r=fun(6,1,2,3,4,6,7);
     //printf("%d",r);
}
*//*
#include<stdio.h>
int main()
{
    int a[6];
    for(int i=0;i<6;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&a[i]);
    }
    for(int j=5;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}
*//*
#include<stdio.h>
void reverseArray(int arr[],int size)
{
    int start=0;
    int end =size-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    //printf("%d\n",size);

    printf("Before reverse array: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n\n");
    reverseArray(arr,size);
    printf("After reverse array: ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);

        printf("\n");
    return 0;

}
*//*
// C implementation of code
#include <stdio.h>
#include <string.h>

// Function to get substr in C
void getString(int pos, int len, int c, char string[])
{

	char substring[1000];

	while (c < len) {
		substring = string[pos + c - 1];
		c++;
	}

	substring = '\0';

	// Print the result
	printf(substring);
	printf("\n");
	return 0;
}

// Driver code
int main()
{

	int pos, len, c = 0;

	// Testcase1
	char string[14] = "geeksforgeeks";

	// Initialize pos, len i.e., starting
	// index and len upto which we have to
	// get substring respectively.
	pos = 6;
	len = 5;
	printf("String: %s ", string);
	printf("\nsubstring is: ");

	// Function call
	getString(pos, len, c, string);

	// Testcase2
	char string2[5] = "abcde";
	pos = 1;
	len = 3;
	c = 0;
	printf("\nString: %s ", string2);
	printf("\nsubstring is: ");

	// Function call
	getString(pos, len, c, string2);

	return 0;
}
*//*
// C Program to print diamond pattern using alphabets
#include <stdio.h>
int main()
{
    int n = 5;

    // first outer loop to iterate through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        // assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n) {
            comp = 2 * (n - i) - 1;
        }
        else {
            comp = 2 * (i - n + 1) + 1;
        }

        // first inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++) {
            printf(" ");
        }

        // second inner loop to print alphabet
        for (int k = 0; k < 2 * n - comp; k++) {
            printf("%c ", k + 'A');
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int *arr[size];
    printf("%d",sizeof(arr));
    fun(arr,size);

    return 0;
}
void fun(int *a,int size)
{
    printf("Enter the array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=size-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }

}

