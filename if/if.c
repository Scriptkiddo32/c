#include <stdio.h>
int main()
{
    int numToTest, remainder;
    printf("enter number to be tested: ");
    scanf("%i", &numToTest);

    remainder = numToTest % 2;

    if( remainder == 0 )
        printf("the number is even \n");
    else
        printf("the number is odd \n");
    return 0;

}