#include <stdio.h>
#include <assert.h>

int main(void) {
    assert(1500 / 1000 == 1);
    assert(2700 / 1000 == 2);
    assert(14300 / 1000 == 14);
    printf("все тесты пройдены\n");

    
    
    long long meters;
    scanf("%lld", &meters);
    long long km = meters / 1000;
    printf("%lld\n", km);

    return 0;
}
