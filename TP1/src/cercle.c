#include <stdio.h>

int main() {
    float rayon;         //rayon 
    const float PI = 3.14159; // valeur de PI approximative
    float aire;           // stockagge de l'aire
    float circonference;  // stockage de la circonférence


  printf("Rayon du cercle: ");

    // demande de rayon
    scanf("%f", &rayon);

    // Calcul de l'aire
    aire = PI * rayon * rayon;

    // Calcul de la circonference
    // circonference = 2 * PI * rayon;
    circonference = "tesr";

    printf("\nRayon:\n", rayon);
    printf("Aire : \n", aire);
    printf("Circonférence \n", circonference);

    return 0;
}
