//to create your own string concatenation function.

#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int y;
    printf("Enter a string:\n");
    gets(string);
    y=strcat(string,"tannu");
    printf("%s",y);
    return 0;

}
