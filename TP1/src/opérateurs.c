#include <stdio.h>
#include <stdbool.h>

int main() {
    // Déclaration et initialisation des variables
    int A = 16;
    int B = 3;

    int addition = A + B;
    int soustraction = B - A;
    int multiplication = A * B;
    double division = A / B;
    int modulo = A % B;
    bool a_equal_b = (a == b);
    bool a_more_b = (a > b);

    // Affichage des valeurs des variables
    printf("Valeur de A : %d\n", A);
    printf("Valeur de B : %d\n", B);

    printf("Addition : %d\n", addition);
    printf("Soustraction : %d\n", soustraction);
    printf("Multiplication : %d\n", multiplication);
    printf("Division : %f\n", division);
    printf("Modulo (reste de la division) : %d\n", modulo);
    printf("a == b : %s\n", a_equal_b ? "true" : "false");
    printf("a > b : %s\n", a_more_b ? "true" : "false");
    
    return 0;
}
