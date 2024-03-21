/*typedef struct a
{
    char name[20],place1[40],place2[50];
    int seat;
    int num;

}new_fun;
void ticket()
{
    int A1=100;
    new_fun e;
    printf("\n******WELCOME TO RAM TRAVELS******\n");
    printf("Enter Name: ");
    scanf("%s",&e.name);
    printf("Enter Mobile number: ");
    scanf("%s",&e.num);
    printf("From:");
    scanf("%s",&e.place1);
    printf("To:");
    scanf("%s",&e.place2);
    if(e.place1 != e.place2)
    {
        printf("LOADING.....\n");
        sleep(1);
    }
    else
    {
        printf("Enter the correct place");
        return 0;
    }
    if(1)
    {
        printf("Available Seats\n");
        printf("A1 A2       A3 A4 A5 \nB1 B2       B3 B4 B5 \nC1 C2       C3 C4 C5");
    }
    printf("\nEnter the number of seat: ");
        scanf("%d",&e.seat);
        switch(e.seat)
        {
            case 1:printf("Amount is %d",A1);
            break;
            case 2:printf("Amount is %d",A1*2);
            break;
            case 3:printf("Amount = %d",A1*3);
            break;
            case 4:printf("Amount = %d",A1*4);
            break;
            case 5:printf("Amount = %d",A1*5);
            break;
            case 6:printf("Amount = %d",A1*6);
            break;
            case 7:printf("Amount = %d",A1*7);
            break;

        }
        printf("\n\nPayment process : Enter to continue....\n");
        getch();
        printf("\nName: %s\t\tMbl number: %d\nFrom: %s\t\tTo: %s\nNo.of Seat: %d\n\n",e.name,e.num,e.place1,e.place2,e.seat);
        printf("\nBOOKING IS SUCCESSFULLY COMPLETED\n");
        return 0;
}
*/
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=&arr;
    for(int i=0;i<5;i++)
    {
        printf("%d",ptr+i);
    }
}
