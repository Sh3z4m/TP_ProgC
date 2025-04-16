#include <stdio.h>
#include <math.h>

int main() {
    double rayon;         //rayon 
    // double aire;           // stockagge de l'aire
    // double circonference;  // stockage de la circonférence


  printf("Rayon du cercle: ");

    // demande de rayon
    scanf("%f", &rayon);

    // Calcul de l'aire
    double aire = M_PI * rayon * rayon;

    // Calcul de la circonference
    double circonference = 2 * M_PI * rayon;

    printf("\nRayon:\n", rayon);
    printf("Aire : \n", aire);
    printf("Circonférence \n", circonference);

    return 0;
}
