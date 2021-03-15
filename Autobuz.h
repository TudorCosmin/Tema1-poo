#ifndef TEMA1_POO_AUTOBUZ_H
#define TEMA1_POO_AUTOBUZ_H


#include <ostream>
#include "Sofer.h"

class Autobuz {
    int numar, nr_locuri, statii;

public:
    Autobuz(int nr, int nrLocuri);

    Autobuz(int nr, int nrLocuri, int nrStatii);


    ~Autobuz();

    friend std::ostream &operator<<(std::ostream &os, const Autobuz &autobuz);

    bool operator==(const Autobuz &rhs) const;

    bool operator!=(const Autobuz &rhs) const;


    static void Introducere(int nr, int locuri, int statii);

    static void AfisareAutobuze();
};


#endif //TEMA1_POO_AUTOBUZ_H
