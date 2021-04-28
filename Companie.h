#ifndef TEMA1_POO_COMPANIE_H
#define TEMA1_POO_COMPANIE_H

#include <vector>
#include <ostream>
#include "Autobuz.h"
#include "Masina.h"
#include "Bicicleta.h"
#include "Vehicul.h"

class Companie {
    bool tip_autobuz = false, tip_masina = false, tip_bicicleta = false;
    std::vector<Autobuz> lista_autobuze;
    std::vector<Masina> lista_masini;
    std::vector<Bicicleta> lista_biciclete;

    std::vector<Vehicul*> lista_vehicule;

public:
    explicit Companie(const std::string& tip);

    ~Companie();



    void adauga(Autobuz &a);

    void adauga(Masina &m);

    void adauga(Bicicleta &b);

    void Claxoneaza();

    friend std::ostream &operator<<(std::ostream &os, const Companie &companie);

};


#endif //TEMA1_POO_COMPANIE_H
