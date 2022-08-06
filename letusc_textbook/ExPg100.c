/*Execution of a loop an unknonwn number of times!*/
#include<stdio.h>
int main()
{
    char another;
    int num;
    do
    {
        printf("Enter a number:");
        scanf("%d",&num);
        printf("Square of %d is %d\n",num,num*num);
        printf("Want to add another number? y/n:");
        fflush(stdin);
        scanf("%c",&another);
    } while(another=='y');   
    return 0;
}       
    

