#include "Autobuz.h"

Autobuz::Autobuz(int nr, int nrLocuri, int nrStatii) : numar(nr), nr_locuri(nrLocuri), statii(nrStatii) {}

Autobuz::Autobuz(const Autobuz &a) : numar(a.numar), nr_locuri(a.nr_locuri), statii(a.statii) {
    //std::cout << "\n\nConstructor de copiere\n\n";
}

Autobuz::~Autobuz() {
}

std::ostream &operator<<(std::ostream &os, const Autobuz &a) {
    os << "Autobuzul nr. " << a.numar << " are " << a.nr_locuri << " locuri si trece prin " << a.statii << " statii\n";
    return os;
}

std::istream &operator>>(std::istream &is, Autobuz &a) {
    std::cout << "\n";
    std::cout << "Numarul autobuzului: \n";
    is >> a.numar;
    std::cout << "Numarul de locuri: \n";
    is >> a.nr_locuri;
    std::cout << "Numarul de statii: \n";
    is >> a.statii;
    return is;
}

bool Autobuz::operator==(const Autobuz &rhs) const {
    return (numar == rhs.numar) && (nr_locuri == rhs.nr_locuri) && (statii == rhs.statii);
}

bool Autobuz::operator!=(const Autobuz &rhs) const {
    return !(rhs == *this);
}

Autobuz &Autobuz::operator=(const Autobuz &a) {
    if(this != &a)
    {
        numar = a.numar;
        nr_locuri = a.nr_locuri;
        statii = a.statii;
    }
    return *this;
}