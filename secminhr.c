#include<stdio.h>
int main()
{
    int t;
    printf("enter the time in seconds: ");
    scanf("%d",&t);

    printf("\n%d seconds is equal to %d minute",t,t/60); //to convert seconds into minute.
    printf("\n%d seconds is equal to %d hour",t,t/360);    //to convert seconds into hour.

    return 0;
}
