//Write a program in C to find the maximum and minimum elements in an array.

#include <stdio.h>
#include <stdlib.h>
int m(int n,int ptr[],int *max,int *min);

int main()
{
    int n,i,min,max;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(i=1;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        else if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Max=%d Min=%d",max,min);
    return 0;

}



