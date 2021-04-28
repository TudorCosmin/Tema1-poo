#include <iostream>
#include "Companie.h"

Companie::Companie(const std::string& tip) {
    if(tip ==  "autobuz")
        tip_autobuz = true;
    else if(tip ==  "masina")
        tip_masina = true;
    else // e de tip bicicleta
        tip_bicicleta = true;
}

// e bine?
Companie::~Companie() {
    for(auto &v : lista_vehicule)
        delete v;
}

// la functiile astea de adaugare as putea sa verific
// sa fie clasa de tipul care se vrea a fi adaugat
// dar nu stiu ce sa fac in caz nu sunt la fel
// poate ceva eroare nu stiu
void Companie::adauga(Autobuz &a) {
    lista_autobuze.push_back(a);
    lista_vehicule.push_back(new Autobuz(a));
}

void Companie::adauga(Masina &m) {
    lista_masini.push_back(m);
    lista_vehicule.push_back(new Masina(m));
}

void Companie::adauga(Bicicleta &b) {
    lista_biciclete.push_back(b);
    lista_vehicule.push_back(new Bicicleta(b));
}

void Companie::Claxoneaza() {
    for(auto& v : lista_vehicule)
        v->Claxon();
}

std::ostream &operator<<(std::ostream &os, const Companie &companie) {
    int i;
    if(companie.tip_autobuz) {
        for (i = 0; i < companie.lista_autobuze.size(); i++)
            os << companie.lista_autobuze[i];
    }
    else if(companie.tip_masina) {
        for (i = 0; i < companie.lista_masini.size(); i++)
            os << companie.lista_masini[i];
    }
    else if(companie.tip_bicicleta) {
        for (i = 0; i < companie.lista_biciclete.size(); i++)
            os << companie.lista_biciclete[i];
    }
    os << "\n";
    return os;
}