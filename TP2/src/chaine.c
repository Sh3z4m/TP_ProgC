#include <stdio.h>

int length(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void copy(char *src, char *dest) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void concatenate(char *dest, char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = " World!";
    char str3[100];

    printf("Longueur de str1 : %d\n", length(str1));
    copy(str1, str3);
    printf("Copie de str1 dans str3 : %s\n", str3);
    concatenate(str1, str2);
    printf("Concaténation de str1 et str2 : %s\n", str1);

    return 0;
}
