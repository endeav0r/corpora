#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t buf[16];
    unsigned int i;

    for (i = 0; i < 16; i++) {
        buf[i] = 0xdeadbeef;
    }

    printf("%u\n", buf[i]);

    return 0;
}