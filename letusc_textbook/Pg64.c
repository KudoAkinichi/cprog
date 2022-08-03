/*Check whether is a leap year or not*/
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter Year:");
    scanf("%d",&year);
    if(year%400==0||year%100!=0&&year%4==0)
        printf("Leap Year\n");
    else
        printf("Not a leap yaer\n");
    return 0;
}    
