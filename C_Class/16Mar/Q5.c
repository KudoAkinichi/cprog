// WAP to print: * * * * *
//                * * * *
//                 * * *
//                  * *
//                   *

#include <stdio.h>  
  
int main()  
{  
    int r,temp;  
    printf("Enter the number of rows");  
    scanf("%d",&r);  
    temp=r;  
   for(int i=1;i<=r;i++)  
   {  
       for(int j=1;j<i;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=temp;k++)  
       {  
           printf("* ");  
       }  
       temp--;  
     
      printf("\n");  
    }  
    return 0;  
}  