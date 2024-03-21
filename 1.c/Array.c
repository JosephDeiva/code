/*//...................ARRAY.......................
// syntax
//     Data_type variable_name[size];
//     int       a[5];
//       int a[5]={1,2,3,4,5};
//            |   | | | | |
//            |   ---------
//size of element  array element */
 /*
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for (int  i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
}*//*
#include<stdio.h>
int main()
{
    int n;
    int size=n-1;
    int arr[size][size];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    

}
*/