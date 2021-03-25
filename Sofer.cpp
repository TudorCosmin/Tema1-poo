#include <iostream>
#include "Sofer.h"

Sofer::Sofer(int ani, int aniExperienta, std::string categoriePermis) :
    varsta(ani), ani_experienta(aniExperienta), categorie_permis(std::move(categoriePermis)) {}

void Sofer::actualizare_varsta(int ani) {
    varsta = ani;
}

void Sofer::actualizare_categorie_permis(std::string categoriePermis) {
    categorie_permis = std::move(categoriePermis);
}

std::ostream &operator<<(std::ostream &os, const Sofer &sofer) {
    os << "Varsta: " << sofer.varsta <<
       "\nAni de experienta: " << sofer.ani_experienta <<
       "\nCategorie permis: " << sofer.categorie_permis << "\n\n";
    return os;
}
