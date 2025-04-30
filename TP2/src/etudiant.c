#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Martin", "Durand", "Lefevre", "Tremblay"};
    char prenoms[5][50] = {"Marie", "Pierre", "Jean", "Sophie", "Luc"};
    char adresses[5][100] = {"20, Boulevard Niels Bohr, Lyon", "22, Boulevard Niels Bohr, Lyon", "24, Boulevard Niels Bohr, Lyon", "26, Boulevard Niels Bohr, Lyon", "28, Boulevard Niels Bohr, Lyon"};
    float notes_progC[5] = {16.5, 14.0, 15.5, 13.0, 17.0};
    float notes_sys[5] = {12.1, 14.1, 13.2, 15.3, 16.4};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.1f\n", notes_progC[i]);
        printf("Note Système d'exploitation : %.1f\n\n", notes_sys[i]);
    }

    return 0;
}
