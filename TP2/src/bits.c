#include <stdio.h>

int main() {
    int d = 0x12345678;
    int bit4 = (d >> 3) & 1;
    int bit20 = (d >> 19) & 1;

    if (bit4 && bit20) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
