#include <iostream>
#include "Autobuz.h"
#include "Sofer.h"

void AfisareOptiuni()
{
    std::cout << "Optiuni: \n";
    std::cout << "1. Introducere un nou autobuz\n";
    std::cout << "2. Introducere o noua masina\n";
    std::cout << "3. Introducere o noua bicicleta\n";

    std::cout << "4. Afisare autobuze\n";
    std::cout << "5. Afisare masini\n";
    std::cout << "6. Afisare biciclete\n";

    std::cout << "7. Iesire\n";
}

void IntroducereAutobuz()
{
    int nr, locuri, statii;
    std::cout << "\n";
    std::cout << "Numarul autobuzului: \n";
    std::cin >> nr;
    std::cout << "Numarul de locuri: \n";
    std::cin >> locuri;
    std::cout << "Numarul de statii: \n";
    std::cin >> statii;

    Autobuz::Introducere(nr, locuri, statii);
}

void AfisareAutobuze()
{

}

int main()
{
    int optiune;
    while(true)
    {
        AfisareOptiuni();
        std::cin >> optiune;

        if(optiune == 1)
            IntroducereAutobuz();

        if(optiune == 4)
            Autobuz::AfisareAutobuze();

        if(optiune == 7)
            exit(0);
    }

}