#ifndef TEMA1_POO_COMPANIE_H
#define TEMA1_POO_COMPANIE_H

#include <vector>
#include <ostream>
#include "Autobuz.h"

class Companie {
    std::vector<Autobuz> lista_autobuze;

public:

    void adauga(Autobuz &a);

    void afisare_autobuze();

    friend std::ostream &operator<<(std::ostream &os, const Companie &companie);

};


#endif //TEMA1_POO_COMPANIE_H
