#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */
void print_most_numbers(void) {
    for(int i=0; i<5; i++) {
        if(i==2 || i==4) continue;
        _putchar(i+'0');
    }
    _putchar('\n');
}

