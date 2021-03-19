#include <cstring>

#include "Bicicleta.h"

Bicicleta::Bicicleta(char Model[]) {
    strcpy(model, Model);
}

std::ostream &operator<<(std::ostream &os, const Bicicleta &bicicleta) {
    os << "Bicicleta " << bicicleta.model;
    return os;
}

std::istream &operator>>(std::istream &is, Bicicleta &bicicleta) {
    std::cout << "\n";
    std::cout << "Modelul de bicicleta: \n";
    is >> bicicleta.model;
    return is;
}