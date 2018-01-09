#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    srand((unsigned int) time(NULL));
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }
    return 0;
}
