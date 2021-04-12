#ifndef TEMA1_POO_SOFER_H
#define TEMA1_POO_SOFER_H

#include <ostream>
#include "Autobuz.h"

class Sofer {
    int varsta, ani_experienta;
    std::string categorie_permis;

    Autobuz a{335, 42, 12}; // acum merge aparent


public:
    Sofer(int ani, int aniExperienta, std::string categoriePermis);

    void actualizare_varsta(int ani);

    void actualizare_categorie_permis(std::string categoriePermis);

    friend std::ostream &operator<<(std::ostream &os, const Sofer &sofer);
};


#endif //TEMA1_POO_SOFER_H
