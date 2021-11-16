#include <stdio.h>
int main()
{
    int minutesentered = 0;
    printf("enter minutes: ");
    scanf("%d", &minutesentered);
    printf("%d", minutesentered);
    double days = 0.0;
    double years = 0.0;
    int minutesinyear = (60 * 24 * 365);
    years - (minutesentered / minutesinyear);
    days - (minutesentered / 60.0);
    printf("minutes = %d \n %d,%d", minutesentered, years, days);
    return 0;
}