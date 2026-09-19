#include <assert.h>
#include <stdio.h>
#include "solution.c"

int main() {
    assert(kopeyki(10, 50, 2) == 0);
    assert(kopeyki(1, 0, 3) == 0);
    assert(kopeyki(0, 33, 3) == 99);

    printf("Все тесты пройдены!\n");
    return 0;
}
