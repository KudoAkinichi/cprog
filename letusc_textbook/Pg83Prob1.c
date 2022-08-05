/*Determine overtime pay of 10 employees*/
#include<stdio.h>
int main()
{
    float otpay;
    int hour,i=1;
    while(i<=10) /*Loop for 10 employees*/
    {
        printf("\nEnter no. of hours worked:");
        scanf("%d",&hour);
        if(hour>=40)
            otpay=(hour-40)*300;
        else
            otpay=0;
        printf("Hours=%d\nOvertime pay=Rs.%f\n",hour,otpay);
        i++;
    }
    return 0;
}