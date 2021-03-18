#include "Companie.h"

#include <iostream>

void Companie::adauga(Autobuz &a) {
    lista_autobuze.push_back(a);
}

void Companie::afisare_autobuze() {
    int i;
    for(i = 0; i < lista_autobuze.size(); i++)
        std::cout << lista_autobuze[i];
    std::cout << "\n";
}

/**
    in clasa Companie as vrea sa am mai multe tipuri de afisari

    se poate sa redefinesc operatorul << astfel incat sa primeasca
    un parametru de tip Companie si sa stie sa faca diferenta
    daca eu vreau sa afisez ce e in lista_autobuze
    sau ce e intr-o eventuala lista_masini?
 */
std::ostream &operator<<(std::ostream &os, const Companie &companie) {
    int i;
    for(i = 0; i < companie.lista_autobuze.size(); i++)
        os << companie.lista_autobuze[i];
    os << "\n";
    return os;
}