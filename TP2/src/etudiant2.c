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

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_progC = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Sieres");
    strcpy(etudiants[2].prenom, "Jose");
    strcpy(etudiants[2].adresse, "2 rue du gros Caillou, Les Clayes-Sous-Bois");
    etudiants[2].note_progC = 18.0;
    etudiants[2].note_sys = 19.1;

    strcpy(etudiants[3].nom, "Lienourd");
    strcpy(etudiants[3].prenom, "Axel");
    strcpy(etudiants[3].adresse, "8ter Avenue du Général Castex, Axel-Sur-Saone");
    etudiants[3].note_progC = 19.0;
    etudiants[3].note_sys = 19.1;

    strcpy(etudiants[4].nom, "Vanniyasingam");
    strcpy(etudiants[4].prenom, "Piremina");
    strcpy(etudiants[4].adresse, "Brou-sur-Chantereine");
    etudiants[4].note_progC = 4.0;
    etudiants[4].note_sys = 18.5;
    
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
