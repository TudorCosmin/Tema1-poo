#include "Autobuz.h"

Autobuz::Autobuz(int nr, int nrLocuri, int nrStatii) : numar(nr), nr_locuri(nrLocuri), statii(nrStatii) {}

Autobuz::Autobuz(const Autobuz &a) : numar(a.numar), nr_locuri(a.nr_locuri), statii(a.statii) {
    //std::cout << "\n\nConstructor de copiere\n\n";
}

Autobuz::~Autobuz() = default;

std::ostream &operator<<(std::ostream &os, const Autobuz &a) {
    os << "\nAutobuzul nr. " << a.numar << " are " << a.nr_locuri << " locuri si trece prin " << a.statii << " statii\n";
    return os;
}

std::istream &operator>>(std::istream &is, Autobuz &a) {
    std::string s;

    std::cout << "\n";
    std::cout << "Numarul autobuzului: \n";
    is >> s;
    if(s.find_first_not_of("12345678") != std::string::npos)
        throw "nr_autobuz";
    a.numar = stoi(s);

    std::cout << "Numarul de locuri: \n";
    is >> s;
    if(s.find_first_not_of("12345678") != std::string::npos)
        throw "nr_locuri";
    a.nr_locuri = stoi(s);

    std::cout << "Numarul de statii: \n";
    is >> s;
    if(s.find_first_not_of("12345678") != std::string::npos)
        throw "nr_statii";
    a.statii = stoi(s);
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