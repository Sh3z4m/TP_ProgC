#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_progC;
    float note_sys;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_progC = 16.5;
    etudiants[0].note_sys = 12.1;


    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation en C : %.1f\n", etudiants[i].note_progC);
        printf("Note Système d'exploitation : %.1f\n\n", etudiants[i].note_sys);
    }

    return 0;
}
