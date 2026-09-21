// 1
#include <assert.h>
#include <stdio.h>
int kopeyki(int a, int b, int n) {
    return (b * n) % 100;
}

int apples_left(int n, int k) {
    return k % n;
}

int main() {
    assert(kopeyki(10, 50, 2) == 0);
    assert(kopeyki(1, 0, 3) == 0);
    assert(kopeyki(0, 33, 3) == 99);

    assert(apples_left(3, 14) == 2);
    assert(apples_left(10, 10) == 0);
    assert(apples_left(7, 1) == 1);

    printf("Все тесты пройдены!\n");
    return 0;
}
