/*To check whether a number is prime or not by dividing it sucessively from 2 to a number less then itself*/
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("Not a prime number\n");
            break;
        }
        i++;
    }
    if(i==num)
        printf("Prime Number\n");
    return 0;    
}