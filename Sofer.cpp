#include <iostream>
#include <string.h>
#include "Sofer.h"

Sofer::Sofer(int ani, int aniExperienta, char categoriePermis[]) {
    varsta = ani;
    ani_experienta = aniExperienta;
    strcpy(categorie_permis, categoriePermis);
}

void Sofer::actualizare_varsta(int ani) {
    varsta = ani;
}

void Sofer::actualizare_categorie_permis(char categoriePermis[]) {
    strcpy(categorie_permis, categoriePermis);
}

std::ostream &operator<<(std::ostream &os, const Sofer &sofer) {
    os << "Varsta: " << sofer.varsta <<
       "\nAni de experienta: " << sofer.ani_experienta <<
       "\nCategorie permis: " << sofer.categorie_permis << "\n\n";
    return os;
}
