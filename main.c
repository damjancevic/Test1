#include <stdio.h>

int main()
{
    double y = 2;
    for(int i = 0; i < 5; i++)
    {
        y = y*y;
    }
    int alpha = 64;
    printf("Hello World! %d\n", alpha);
    alpha++;
    printf("%d\n", alpha);
    return 0;
}
