#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    char c = 'A';
    signed char sc = -120;
    unsigned char uc = 250;

    short s = -32000;
    unsigned short us = 64000;

    int i = -2147483647;
    unsigned int ui = 4294967295U;

    long int li = -9223372036854775807L;
    unsigned long int uli = 18446744073709551615UL;

    long long int lli = -9223372036854775807LL;
    unsigned long long int ulli = 18446744073709551615ULL;

    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.14159265358979323846L;

    // Affichage des valeurs des variables
    printf("Valeur de 'char c' : %c\n", c);
    printf("Valeur de 'signed char sc' : %d\n", sc);
    printf("Valeur de 'unsigned char uc' : %u\n", uc);

    printf("Valeur de 'short s' : %d\n", s);
    printf("Valeur de 'unsigned short us' : %u\n", us);

    printf("Valeur de 'int i' : %d\n", i);
    printf("Valeur de 'unsigned int ui' : %u\n", ui);

    printf("Valeur de 'long int li' : %ld\n", li);
    printf("Valeur de 'unsigned long int uli' : %lu\n", uli);

    printf("Valeur de 'long long int lli' : %lld\n", lli);
    printf("Valeur de 'unsigned long long int ulli' : %llu\n", ulli);

    printf("Valeur de 'float f' : %f\n", f);
    printf("Valeur de 'double d' : %lf\n", d);
    printf("Valeur de 'long double ld' : %Lf\n", ld);

    return 0;
}
