#include <stdio.h>
int main()
{
    for (int j = 0; j <= 10; j++) {

        if (j == 4)  {
	    continue;
        }

        printf("%d\n", j);

        if (j == 8) {
            break;
        } 
    }
    return 0;
}
