#include <stdint.h>
#include <stdio.h>

int main() {
    uint8_t buf[24];
    unsigned int i;

    for (i = 0; i < 23; i++) {
        buf[i] = getchar();
    }

    buf[23] = '\0';

    printf("%s\n", buf);

    return 0;
}