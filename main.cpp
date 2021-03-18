#include <iostream>

#include "Autobuz.h"
#include "Companie.h"
#include "Sofer.h"

void AfisareOptiuni() {
    std::cout << "Optiuni: \n";
    std::cout << "1. Introducere un nou autobuz\n";
    std::cout << "2. Introducere o noua masina\n";
    std::cout << "3. Introducere o noua bicicleta\n";

    std::cout << "4. Afisare autobuze\n";
    std::cout << "5. Afisare masini\n";
    std::cout << "6. Afisare biciclete\n";

    std::cout << "7. Iesire\n";
}

int main()
{
    Sofer Gigel(40, 18, "ABE");
    std::cout << Gigel;
    Gigel.actualizare_varsta(41);
    std::cout << Gigel;
    Gigel.actualizare_categorie_permis("A2BE");
    std::cout << Gigel;


    Companie STB; // companie cu autobuze
    Autobuz a;
    int optiune, i, ok;

    while(true)
    {
        AfisareOptiuni();
        try
        {
            std::cin >> optiune;

            ok = 0;
            for(i = 1; i <= 7; i ++)
                if(optiune == i)
                    ok = 1;
            if(ok != 1)
                throw 1;

            else if(optiune == 1)
            {
                std::cin >> a;
                STB.adauga(a);
            }

            else if(optiune == 2)
                ;//Introducere masina

            else if(optiune == 3)
                ;//Introducere bicicleta

            else if(optiune == 4)
                STB.afisare_autobuze();

            else if(optiune == 5)
                ;//Afisare masini

            else if(optiune == 6)
                ;//Afisare biciclete

            else if(optiune == 7)
                exit(0);
            else throw 2;
        }
        catch (...)
        {
            std::cout << "\nOptiunea introdusa nu este valida!\n\n";
        }
    }

}