#ifndef TEMA1_POO_COMPANIE_H
#define TEMA1_POO_COMPANIE_H

#include <vector>
#include <ostream>
#include <memory>
#include "Autobuz.h"
#include "Masina.h"
#include "Bicicleta.h"
#include "Vehicul.h"


template<typename T>
class Companie;

template<typename T>
std::ostream &operator<<(std::ostream& os, const Companie<T> &c);


template<typename T>
class Companie {
    std::vector<Autobuz> lista_autobuze;
    std::vector<Masina> lista_masini;
    std::vector<Bicicleta> lista_biciclete;

    // std::vector<Vehicul*> lista_vehicule; // pentru asta trebuie new ceva
    // cu shared pointer aveam memory leaks mai mari decat cu * (480kb fata de 420kb la still reachable sau ceva)
    std::vector< std::unique_ptr<Vehicul> > lista_vehicule;

public:
    Companie() = default;

    void adauga(T &v);

    friend std::ostream &operator<< <>(std::ostream &os, const Companie<T> &c);

    void Claxoneaza();


};


#endif //TEMA1_POO_COMPANIE_H
