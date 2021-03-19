#ifndef TEMA1_POO_BICICLETA_H
#define TEMA1_POO_BICICLETA_H

#include <iostream>

class Bicicleta {
    char model[20];

public:
    Bicicleta(char Model[]);

    friend std::ostream &operator<<(std::ostream &os, const Bicicleta &bicicleta);

    friend std::istream &operator>>(std::istream &is, Bicicleta &bicicleta);
};


#endif //TEMA1_POO_BICICLETA_H
