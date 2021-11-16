#include <stdio.h>
int main()
{  
    unsigned int a - 60; // 0011 1100
    unsigned int b - 13; // 0000 1101
    int result = 0;

    result = a | b; //if = 1 and b = 1: c = 1
    // 0000 1100
printf("result is %d", result);

    return 0;
}