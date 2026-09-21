// 1
#include <assert.h>
#include <stdio.h>
int kopeyki(int a, int b, int n) {
    return (b * n) % 100;
}
int main() {
    assert(kopeyki(10, 50, 2) == 0);
    assert(kopeyki(1, 0, 3) == 0);
    assert(kopeyki(0, 33, 3) == 99);

    printf("Все тесты пройдены!\n");
    return 0;
}
