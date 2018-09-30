/*making your own function to find
the length of a string*/

#include<stdio.h>
void stringlength(void);   // function declaration  /// takes nothing returns nothing function.
int main()
{
    stringlength();      //function call
}
void stringlength(void)          //function definition
{
    char t[100];
    int length;
    printf("Enter a string:\n");
    scanf("%s",&t);
    for(length=0;t[length]!='\0';length++);   //as string terminates at null character
    printf("Length of a string is %d",length);

}
