#include <stdio.h>

int main()
{
    int h, m, s, next;
    int addHour;

    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d", &next);

    m += next;
    
    addHour = m / 60;
    m = m % 60;
    h = h + addHour;

        printf("%d:%d:%d\n", h, m, s);
        printf("to next day : %d hour %d minute %d second\n",
               23 - h,
               59 - m,
               60 - s);
  
    return 0;
}
