#include "Bicicleta.h"


std::ostream &operator<<(std::ostream &os, const Bicicleta &bicicleta) {
    os << "\nBicicleta " << bicicleta.model << ", roti pe " << bicicleta.marime_roti <<
        ", transmisie " << bicicleta.transmisie << " si frana pe " << bicicleta.tip_frana << "\n\n";
    return os;
}

std::istream &operator>>(std::istream &is, Bicicleta &bicicleta) {
    // iarasi nu am nicio exceptie, poate fi orice
    std::cout << "\n";
    std::cout << "Modelul de bicicleta: \n";
    is >> bicicleta.model;

    std::cout << "\n";
    std::cout << "Marimea rotilor (in inchi): \n";
    is >> bicicleta.marime_roti;

    std::cout << "\n";
    std::cout << "Transmisie: \n";
    is >> bicicleta.transmisie;

    std::cout << "\n";
    std::cout << "Tip frana: \n";
    is >> bicicleta.tip_frana;

    std::cout << "\n";
    return is;
}

Bob_the_builder &Bob_the_builder::model(std::string Model) {
    bicicleta.model = std::move(Model);
    return *this;
}

Bob_the_builder &Bob_the_builder::transmisie(std::string Transmisie) {
    bicicleta.transmisie = std::move(Transmisie);
    return *this;
}

Bob_the_builder &Bob_the_builder::tip_frana(std::string Frana) {
    bicicleta.tip_frana = std::move(Frana);
    return *this;
}

Bob_the_builder &Bob_the_builder::marime_roti(int Marime_roti) {
    bicicleta.marime_roti = Marime_roti;
    return *this;
}

Bicicleta Bob_the_builder::asambleaza() {
    return bicicleta;
}
