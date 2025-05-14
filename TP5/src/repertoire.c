#include "repertoire.h"
#include <stdio.h>
#include <dirent.h>

void lire_dossier(const char *nom_repertoire) {
    DIR *dossier;
    struct dirent *entree;

    if ((dossier = opendir(nom_repertoire)) != NULL) {
        while ((entree = readdir(dossier)) != NULL) {
            printf("%s\\n", entree->d_name);
        }
        closedir(dossier);
    } else {
        perror("Erreur lors de l'ouverture du répertoire");
    }
}
