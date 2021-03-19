#include <iostream>

#include "Companie.h"
#include "Sofer.h"
#include "Autobuz.h"
#include "Masina.h"
#include "Bicicleta.h"

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
    int optiune, i, ok;
    Companie STB("autobuz"); // companie cu autobuze
    Companie Spark("masina"); // companie care inchiriaza masini
    Companie BikeRent("bicicleta"); // companie care inchiriaza biciclete

    // sa vad daca merge clasa Sofer
    Sofer Gigel(40, 18, "ABE");
    std::cout << Gigel;
    Gigel.actualizare_varsta(41);
    std::cout << Gigel;
    Gigel.actualizare_categorie_permis("A2BE");
    std::cout << Gigel;

    //introduc cate 1-2 default la fiecare
    Autobuz autobuz(335, 42, 16);
    STB.adauga(autobuz);
    autobuz = Autobuz(41,25,14);
    STB.adauga(autobuz);

    Masina masina("B-500-BOS", "BMW", 2002);
    Spark.adauga(masina);

    Bicicleta bicicleta("mountain-bike");
    BikeRent.adauga(bicicleta);

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
                std::cin >> autobuz;
                STB.adauga(autobuz);
            }

            else if(optiune == 2)
            {
                std::cin >> masina;
                Spark.adauga(masina);
            }

            else if(optiune == 3) {
                std::cin >> bicicleta;
                BikeRent.adauga(bicicleta);
            }


            else if(optiune == 4)
                std::cout << STB;

            else if(optiune == 5)
                std::cout << Spark;

            else if(optiune == 6)
                std::cout << BikeRent;

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