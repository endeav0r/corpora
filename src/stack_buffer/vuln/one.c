/*
* Simple stack buffer overflow, 8-bit writes.
*/

#include <stdint.h>
#include <stdio.h>

int main() {
    uint8_t buf[24];
    unsigned int i;

    for (i = 0; i < 32; i++) {
        buf[i] = getchar();
    }

    buf[23] = '\0';

    printf("%s\n", buf);

    return 0;
}