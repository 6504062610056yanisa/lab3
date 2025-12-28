#include <stdio.h>

int main()
{
    int h, m, s, next;
    scanf("%d:%d:%d", &h, &m, &s);
    scanf("%d", &next);
    if(m > 60){
        int h = h + 1;
    }else{
        int m = m + next;
    }

    printf("hour:%d\nminute:%d\nsecond:%d", h, m, s);

    return 0;
}
