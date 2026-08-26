#include <stdio.h>

int main() {
    printf("%c%c%c%c\n", '\xC9', '\xCD', '\xCD', '\xBB');
    printf("%c  %c\n", '\xBA', '\xBA');
    printf("%c  %c\n", '\xBA', '\xBA');
    printf("%c%c%c%c\n", '\xC8', '\xCD', '\xCD', '\xBC');
    return 0;
}