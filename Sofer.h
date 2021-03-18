#ifndef TEMA1_POO_SOFER_H
#define TEMA1_POO_SOFER_H

#include <ostream>
#include "Autobuz.h"

class Sofer {
    int varsta, ani_experienta;
    char categorie_permis[10];

    Autobuz a; // nu stiu exact ce ar trebui sa fac cu asta

    //Autobuz a(335, 42, 12); // chestia asta da eroare desi eu cred
                            // ca ar trebui sa se apeleze constructorul


public:
    Sofer(int ani, int aniExperienta, char categoriePermis[]);

    void actualizare_varsta(int ani);

    void actualizare_categorie_permis(char categoriePermis[]);

    friend std::ostream &operator<<(std::ostream &os, const Sofer &sofer);
};


#endif //TEMA1_POO_SOFER_H
