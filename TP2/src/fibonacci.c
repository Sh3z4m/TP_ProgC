#include <stdio.h>

int main() {
    int n = 9;
    int u0 = 0, u1 = 1, un;

    printf("%d, %d", u0, u1);

    for (int i = 2; i < n; i++) {
        un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
