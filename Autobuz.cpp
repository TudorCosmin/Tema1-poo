#include <iostream>
#include "Autobuz.h"
#include <ctime>
#include <cstdlib>
#include <vector>

std::vector<Autobuz>lista_bus;

Autobuz::Autobuz(int nr, int nrLocuri) : numar(nr), nr_locuri(nrLocuri) {}

Autobuz::Autobuz(int nr, int nrLocuri, int nrStatii) : numar(nr), nr_locuri(nrLocuri), statii(nrStatii) {}


Autobuz::~Autobuz() {
}

std::ostream &operator<<(std::ostream &os, const Autobuz &autobuz) {
    os << "Autobuzul nr. " << autobuz.numar << " are " << autobuz.nr_locuri << " locuri si trece prin " << autobuz.statii << " statii\n";
    return os;
}

bool Autobuz::operator==(const Autobuz &rhs) const {
    return nr_locuri == rhs.nr_locuri;
}

bool Autobuz::operator!=(const Autobuz &rhs) const {
    return !(rhs == *this);
}

void Autobuz::Introducere(int nr, int locuri, int statii) {
    Autobuz a(nr, locuri);
    lista_bus.push_back(a);
}

void Autobuz::AfisareAutobuze() {
    int i;
    for(i = 0; i < lista_bus.size(); i++)
        std::cout << lista_bus[i];
    std::cout << "\n";
}