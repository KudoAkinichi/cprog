/*Calculation of aggregate & percentage marks*/
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("\nEnter marks in 5 subjects: ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    aggr= m1 + m2 + m3 + m4 + m5;
    per= aggr/5;
    printf("Aggregate Marks= %d\n,aggr");
    printf("Percentage Marks= %f\n, per");
    return 0;
}