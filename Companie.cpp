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

std::ostream &operator<<(std::ostream &os, const Companie &companie) {
    int i;
    for(i = 0; i < companie.lista_autobuze.size(); i++)
        os << companie.lista_autobuze[i];
    os << "\n";
    return os;
}