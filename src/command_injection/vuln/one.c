/*
* Very simple example, SOURCE to SINK. No aliasing.
*/

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char * command = getenv("COMMAND");

    system(command);
    
    return 0;
}