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
    char s[100];
    int length;
    printf("Enter a string:\n");
    scanf("%s",&s);
    for(length=0;s[length]!='\0';length++);   //as string terminates at null character
    printf("Length of a string is %d",length);

}
