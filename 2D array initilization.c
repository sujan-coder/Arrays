#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[][3]={1,2,1,2,3,1,2,5,8,7,8,9},i,j;

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
    return 0;
}