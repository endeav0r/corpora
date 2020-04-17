/*
* Must alias buf, understand command taints buf through snprintf.
* Heap variable.
*/

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char * command = getenv("COMMAND");
    char * something = getenv("something");

    int x = atoi(something);

    char * buf = malloc(1024);
    snprintf(buf, 1024, "/bin/idontknow %s -d %d\n", command, x);

    system(buf);

    free(buf);
    
    return 0;
}