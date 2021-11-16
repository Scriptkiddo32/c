#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 33;
    int b = 15;
    int result1;
    result1 = a - b;
    printf("result is %d \n", result1);
	printf("result is %d \n", --a);

	bool a1 = 1;
    bool b1 = 0;
    bool result2;
    //a and b both have to be true for 1 on this printf
    result2 = a1 && b1;
    printf("%d \n", result2);

    bool a2 = 0;
    bool b2 = 0;
    bool result3;
    //|| = or
    result3 = a2 || b2;
    printf("%d \n", result3);


    return 0;

}