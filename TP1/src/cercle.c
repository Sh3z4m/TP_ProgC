#include <stdio.h>
#include <math.h>

int main() {
    double rayon;         //rayon 
    // double aire;           // stockagge de l'aire
    // double circonference;  // stockage de la circonférence


  printf("Rayon du cercle: ");

    // demande de rayon
    scanf("%lf", &rayon);

    // Calcul de l'aire
    double aire = M_PI * rayon * rayon;

    // Calcul de la circonference
    double circonference = 2 * M_PI * rayon;

    printf("Rayon:%lf\n", rayon);
    printf("Aire :%lf\n", aire);
    printf("Circonférence : %lf\n", circonference);

    return 0;
}
