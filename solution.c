#include <stdio.h>

int main(void) {
    long long meters;
    scanf("%lld", &meters);
    long long km = meters / 1000;
    printf("%lld\n", km);
    return 0;
}
