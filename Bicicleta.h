#ifndef TEMA1_POO_BICICLETA_H
#define TEMA1_POO_BICICLETA_H

#include <iostream>
#include "Vehicul.h"

class Bicicleta: public Vehicul {
    std::string model;
    std::string transmisie;
    std::string tip_frana;
    int marime_roti;

    friend class Bob_the_builder;
public:
    friend std::ostream &operator<<(std::ostream &os, const Bicicleta &bicicleta);

    friend std::istream &operator>>(std::istream &is, Bicicleta &bicicleta);
};

class Bob_the_builder {
    Bicicleta bicicleta;

public:
    Bob_the_builder() = default;

    Bob_the_builder &model(std::string Model);
    Bob_the_builder &transmisie(std::string Transmisie);
    Bob_the_builder &tip_frana(std::string Frana);
    Bob_the_builder &marime_roti(int Marime_roti);

    Bicicleta asambleaza();
};


#endif //TEMA1_POO_BICICLETA_H
