#ifndef TEMA1_POO_MASINA_H
#define TEMA1_POO_MASINA_H

#include <ostream>

class Masina {
    std::string numar_inmatriculare;
    std::string marca;
    int an_fabricatie;
public:
    Masina(std::string numarInmatriculare, std::string marcaMasina, int anFabricatie);

    friend std::ostream &operator<<(std::ostream &os, const Masina &masina);

    friend std::istream &operator>>(std::istream &is, Masina &masina);

    void claxon();

    void surpriza();
};


#endif //TEMA1_POO_MASINA_H
