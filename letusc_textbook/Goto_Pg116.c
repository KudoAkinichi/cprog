#include<stdio.h>
#include<stdlib.h>
int main()
{
    int goals;
    printf("Enter numbers of goals scored against India:");
    scanf("%d",&goals);
    if(goals<=5)
        goto sos;
    else
    {
        printf("About time soccer players learnt C\n");
        printf("and said goodbye to soccer lmao\n");
        exit(1); /*Terminates program execution*/
    }
    sos:
        printf("May they rise more and more!!");
    return 0;                  
}
