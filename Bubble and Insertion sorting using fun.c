// bubble and insterion sort using function
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,a[50],o,n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("1->Bubble sort\n2->Insertion sort\n\n");
    printf("Enter the option\n");
    scanf("%d",&o);
    switch(o)
    {
        case 1:bubble(a,n);
        break;
        case 2:insertion(a,n);
        break;
        default:printf("Invalid");
    }
    return 0;
}

int bubble(int a[],int n)
{
     int i,j,flag,temp;
     printf("After sorting:\n");
    for (i = 0; i < n - 1; i++)
        {
        flag=0;
        for (j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1])
             {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag=1;
            }
        }
    if(flag==0)
    {
        break;
    }
    }


    for (i = 0; i < n; i++)
        {
        printf("%d ", a[i]);
        }

}


int insertion(int a[],int n)
{
    int i,j,temp;
    printf("After sorting:\n");
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}
