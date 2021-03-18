#ifndef TEMA1_POO_AUTOBUZ_H
#define TEMA1_POO_AUTOBUZ_H

#include <iostream>

class Autobuz {
    int numar, nr_locuri, statii;

public:
    Autobuz(int nr = 0, int nrLocuri = 0, int nrStatii = 0);

    Autobuz(const Autobuz &a);


    ~Autobuz();

    friend std::ostream &operator<<(std::ostream &os, const Autobuz &autobuz);

    friend std::istream &operator>>(std::istream &is, Autobuz &autobuz);

    bool operator==(const Autobuz &rhs) const;

    bool operator!=(const Autobuz &rhs) const;

    Autobuz& operator=(const Autobuz &a);
};


#endif //TEMA1_POO_AUTOBUZ_H
