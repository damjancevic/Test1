#include <stdio.h>

int main()
{
    int y = 2;
    for(int i = 0; i < 5; i++)
    {
        y = y*2;
    }
    y = y - 10;
    int alpha = 64;
    alpha = alpha - y;
    printf("Hello World! %d\n", alpha);
    alpha++;
    printf("%d\n", alpha);
    return 0;
}
