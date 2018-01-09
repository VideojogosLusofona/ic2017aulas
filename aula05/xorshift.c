#include <stdio.h>
#include <time.h>

unsigned long state;

unsigned int my_random();

int main() {

    state = (unsigned long) time(NULL);
    for (int i = 0; i < 5; i++) {
        printf("%u\n", my_random());
    }
    return 0;

}

unsigned int my_random() {

	/* Atualiza estado */
	state ^= (state << 21);
	state ^= (state >> 35);
	state ^= (state << 4);

	/* Devolver valor. */
	return (unsigned int) state;

}
