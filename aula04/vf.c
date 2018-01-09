#include <stdio.h>
int main() {

    /* Variables. */
    int a = 3, b = 6, c = 3;
    int result;

    /* Operations. */
    result = a == b;
    printf("a == b | %d\n", result);
    result = a != b;
    printf("a != b | %d\n", result);
    result = a == c;
    printf("a == c | %d\n", result);
    result = a < b;
    printf("a < b  | %d\n", result);
    result = a > c;
    printf("a > c  | %d\n", result);
    result = a >= c;
    printf("a >= c | %d\n", result);
    result = a <= b;
    printf("a <= b | %d\n", result);

    /* Say bye. */
    return 0; 
}
