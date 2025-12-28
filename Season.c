#include <stdio.h>

int main()
{
    int month = 0, getm = 0;

    if (scanf("%d", &month) != 1)
        return 0;

    switch (month)
    {
    case 6:
        getm = 1;
        break;
    case 7:
        getm = 1;
        break;
    case 8:
        getm = 1;
        break;
    default:
        break;
    }

    if (getm == 1)
    {
        int summer;

        if (month < 11)
        {
            summer = 11 - month;
        }
        else
        {
            summer = (12 - month) + 11;
        }

        printf("winter is coming %d\n", summer);
    }

    return 0;
}