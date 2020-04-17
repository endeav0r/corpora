/*
* Simple stack buffer overflow, 32-bit writes.
*/

#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t buf[16];
    unsigned int i;

    for (i = 0; i < 17; i++) {
        buf[i] = 0xdeadbeef;
    }

    printf("%u\n", buf[16]);

    return 0;
}