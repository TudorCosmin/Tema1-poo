#include "Companie.h"

#include <iostream>
#include <cstring>

Companie::Companie(char tip[]) {
    if(strcmp(tip, "autobuz") == 0) {
        tip_autobuz = true;
        tip_masina = false;
        tip_bicicleta = false;
    }
    else if(strcmp(tip, "masina") == 0) {
        tip_autobuz = false;
        tip_masina = true;
        tip_bicicleta = false;
    }
    else { // e de tip bicicleta
        tip_autobuz = false;
        tip_masina = false;
        tip_bicicleta = true;
    }
}

// la functiile astea de adaugare as putea sa verific
// sa fie clasa de tipul care se vrea a fi adaugat
// dar nu stiu ce sa fac in caz nu sunt la fel
// poate ceva eroare nu stiu
void Companie::adauga(Autobuz &a) {
    lista_autobuze.push_back(a);
}

void Companie::adauga(Masina &m) {
    lista_masini.push_back(m);
}

void Companie::adauga(Bicicleta &b) {
    lista_biciclete.push_back(b);
}

/// cred ca am rezolvat intrebarea din commit-ul anterior
/// nu stiu daca e cea mai buna solutie :D
std::ostream &operator<<(std::ostream &os, const Companie &companie) {
    int i;
    if(companie.tip_autobuz) {
        for (i = 0; i < companie.lista_autobuze.size(); i++)
            os << companie.lista_autobuze[i];
        os << "\n";
        return os;
    }
    else if(companie.tip_masina) {
        for (i = 0; i < companie.lista_masini.size(); i++)
            os << companie.lista_masini[i];
        os << "\n";
        return os;
    }
    else if(companie.tip_bicicleta) {
        for (i = 0; i < companie.lista_biciclete.size(); i++)
            os << companie.lista_biciclete[i];
        os << "\n";
        return os;
    }
}
