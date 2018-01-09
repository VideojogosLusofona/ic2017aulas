#include <stdio.h>

void muda(int x, int *y)
{
    x += 3;
    *y = x;
}

int main()
{
    int x = 0, y = 0;
    muda(x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
