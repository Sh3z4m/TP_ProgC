#include <stdio.h>

int main() {
    // Déclaration et initialisation des variables
    int A = 16;
    int B = 3;

    int addition = A + B;
    int soustraction = B - A;
    int multiplication = A * B;
    double division = A / B;
    int modulo = A % B;

    // Affichage des valeurs des variables
    printf("Valeur de A : %d\n", A);
    printf("Valeur de B : %d\n", B);

    printf("Addition : %d\n", addition);
    printf("Soustraction : %d\n", soustraction);
    printf("Multiplication : %d\n", multiplication);
    printf("Division : %f\n", division);
    printf("Modulo : %d\n", modulo);

    return 0;
}
