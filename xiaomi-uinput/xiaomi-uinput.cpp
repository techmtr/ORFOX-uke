/*
 * xiaomi-uinput: Touch input helper daemon for recovery
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
    printf("xiaomi-uinput: touch daemon initialized\n");
    while (1) {
        pause();
    }
    return 0;
}
