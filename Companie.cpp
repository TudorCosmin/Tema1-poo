#include <iostream>
#include "Companie.h"

template<typename T>
void Companie<T>::adauga(T &v) {}
template<>
void Companie<Autobuz>::adauga(Autobuz &a) {
    lista_autobuze.push_back(a);
    lista_vehicule.push_back(std::make_unique<Autobuz>(a));
}
template<>
void Companie<Masina>::adauga(Masina &m) {
    lista_masini.push_back(m);
    lista_vehicule.push_back(std::make_unique<Masina>(m));
}
template<>
void Companie<Bicicleta>::adauga(Bicicleta &b) {
    lista_biciclete.push_back(b);
    lista_vehicule.push_back(std::make_unique<Bicicleta>(b));
}

// la op astia de afisare am warning uri de genul ppentru fiecare tip:
// Clang-Tidy: Function template specialization 'operator<<<Autobuz>'
// has a primary template declaration with different parameter names
// nu prea stiu cum sa le rezolv
template <>
std::ostream &operator<<(std::ostream &os, const Companie<Autobuz> &a) {
    int i;
    for (i = 0; i < a.lista_autobuze.size(); i++)
        os << a.lista_autobuze[i];
    return os;
}
template <>
std::ostream &operator<<(std::ostream &os, const Companie<Masina> &m) {
    int i;
    for (i = 0; i < m.lista_masini.size(); i++)
        os << m.lista_masini[i];
    return os;
}

template <>
std::ostream &operator<<(std::ostream &os, const Companie<Bicicleta> &b) {
    int i;
    for (i = 0; i < b.lista_biciclete.size(); i++)
        os << b.lista_biciclete[i];
    return os;
}


template<>
void Companie<Autobuz>::Claxoneaza() {
    for(auto& v : lista_vehicule)
        v->Claxon();
}
template<>
void Companie<Masina>::Claxoneaza() {
    for(auto& v : lista_vehicule)
        v->Claxon();
}
template<>
void Companie<Bicicleta>::Claxoneaza() {
    for(auto& v : lista_vehicule)
        v->Claxon();
}