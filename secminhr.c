#include<stdio.h>
void main()
{
    int time;
    printf("Enter Your time in seconds: ");
    scanf("%d", &time);

    printf("\n%d seconds is equal to %d minute", time, time/60); //to convert seconds into minute.
    printf("\n%d seconds is equal to %d hour", time, time/360);    //to convert seconds into hour.
    
}
