#include <iostream>

#include "Companie.h"
#include "Sofer.h"
#include "Autobuz.h"
#include "Masina.h"
#include "Bicicleta.h"

void AfisareOptiuni() {
    std::cout << "Optiuni: \n";
    std::cout << "1. Aventureaza-te sa treci strada intr-un loc\n"
                 "      plin de biciclete, masini si autobuze! [ATENTIE! DOAR PENTRU WINDOWS]\n";

    std::cout << "2. Introducere un nou autobuz\n";
    std::cout << "3. Introducere o noua masina\n";
    std::cout << "4. Introducere o noua bicicleta\n";

    std::cout << "5. Afisare autobuze\n";
    std::cout << "6. Afisare masini\n";
    std::cout << "7. Afisare biciclete\n";

    std::cout << "8. Iesire\n";
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
            for(i = 1; i <= 8; i ++)
                if(optiune == i)
                    ok = 1;
            if(ok != 1)
                throw 1;

            else if(optiune == 1)
            {
                if (masina.TreciStrada() == 1)
                    std::cout << "Pentru a putea folosi aceasta functie este necesar sa pui\n"
                                 "masinute.exe in fisierul principal (ala cu headere)\n";
            }

            else if(optiune == 2)
            {
                std::cin >> autobuz;
                STB.adauga(autobuz);
            }

            else if(optiune == 3)
            {
                std::cin >> masina;
                Spark.adauga(masina);
            }

            else if(optiune == 4) {
                std::cin >> bicicleta;
                BikeRent.adauga(bicicleta);
            }


            else if(optiune == 5)
                std::cout << STB << "\n";

            else if(optiune == 6)
                std::cout << Spark << "\n";

            else if(optiune == 7)
                std::cout << BikeRent << "\n";

            else if(optiune == 8)
                exit(0);
            else throw 2;
        }
        catch (...)
        {
            std::cout << "\nOptiunea introdusa nu este valida!\n\n";
        }
    }

}