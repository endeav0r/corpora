/*
* Simple program for symbolic execution
*/

#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

void run2(const uint8_t * buf) {
    printf("Win\n");
}

void run(const uint8_t * buf) {
    uint32_t count = 0;

    if (buf[0] == 'a') {
        count += 1;
    }
    if (buf[1] == 'b') {
        count += 2;
    }
    if (buf[2] == 'c') {
        count += 3;
    }
    if (buf[3] == 'd') {
        count += 5;
    }
    if (buf[4] == 'e') {
        count += 7;
    }
    if (buf[5] == 'f') {
        count += 11;
    }

    if (count == 15) {
        run2(buf);
    }
}

int main() {
    uint8_t buf[1024];

    read(0, buf, 1024);

    run(buf);

    return 0;
}