#include <stdio.h>
int main(int argc, char* argv[])
{
    int i, j, linhas;
    linhas = 10;
    for(i = 1; i <= linhas; ++i)
    {
        for(j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
