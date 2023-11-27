#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    if (x < 0 || x > 15 || y < 0 || y > 15)
        return 0;

    char z = (x << 4) | y;

    printf("Compressed value: %d\n", z);

    return 0;
}


// 111111111
// 000000000 + 1 = 00000001
