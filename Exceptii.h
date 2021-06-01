#ifndef TEMA1_POO_EXCEPTII_H
#define TEMA1_POO_EXCEPTII_H

class conversie_nereusita : public std::logic_error {
public:
    explicit conversie_nereusita(const std::string &arg) : std::logic_error(arg) {}
};

// stoi cu mesaj custom :)
static int stoim(const std::string &s, const std::string &mesaj) {
    try {
        return std::stoi(s);
    }
    catch(std::logic_error &ex) {
        throw conversie_nereusita(mesaj);
    }
}


#endif //TEMA1_POO_EXCEPTII_H
