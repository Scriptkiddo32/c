#include <stdio.h>

int main()
{
    enum company {GOOGLE,FACEBOOK,XEROX,EBAY,MICROSOFT};
	//cannot asign anything other than this list
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("The value of google is: %d", google);
    printf("The value of ebay is: %d", ebay);
    printf("The value of xerox is: %d", xerox);
    
    return 0;
}