/*
* Must alias buf, understand command taints buf through snprintf.
* Stack variable.
*/

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char * command = getenv("COMMAND");
    char * thing = getenv("THING");
    char * something = getenv("something");

    int x = atoi(something);
    char buf[64];
    snprintf(buf, 64, "/bin/idontknow %s -d %d\n", command, x);

    system(buf);
    
    return 0;
}