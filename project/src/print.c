#include <stdio.h>

void printing(int n, int k) {
	printf("%d", k);   // Переменная k нужна для того, чтобы вывести числа в порядке возрастания
	if (k != n) {
		printf(" ");
		if (k < n) {
			printing(n, ++k);
		}
		if (k > n) {
			printing(n, --k);
		}
	}
}

