#ifndef TEMA1_POO_MASINA_H
#define TEMA1_POO_MASINA_H

#include <ostream>

class Masina {
    char numar_inmatriculare[20];
    char marca[20];
    int an_fabricatie;
public:
    Masina(char numarInmatriculare[], char marcaMasina[], int anFabricatie);

    friend std::ostream &operator<<(std::ostream &os, const Masina &masina);

    friend std::istream &operator>>(std::istream &is, Masina &masina);

    void claxon();

    void surpriza();
};


#endif //TEMA1_POO_MASINA_H
