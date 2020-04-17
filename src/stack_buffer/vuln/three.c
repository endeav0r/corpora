/*
* Stack-buffer overflow, 32-bit writes.
* While run() is vulnerable, we must understand the calling-context through
* which it is, and is not, vulnerable.
*/

#include <stdint.h>
#include <stdio.h>

int run(int x) {
    uint32_t buf[16];
    unsigned int i;

    for (i = 0; i < x; i++) {
        buf[i] = 0xdeadbeef;
    }

    printf("%u\n", buf[15]);

    return 0;
}

int main() {
    run(17);
    return 0;
}