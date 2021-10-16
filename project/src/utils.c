#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "utils.h"

size_t timer_from(int from) {
    size_t counter = 0;
    for (int i = from; i >= 0; --i) {
	if (i != from) {
		printf(" ");
	}
        ++counter;
        printf("%d", i);
	if (i == 0) {
		printf("\n");
	}
    }
    return counter;
}

int custom_pow(int base, int power) {
		if (power == 0) return 1;
		double x = 1;
		for (int i = power; i > 0; i--) {
			x *= base;
		}
    return x;
}
