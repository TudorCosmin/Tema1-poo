#include <iostream>

#include "Companie.h"
#include "Sofer.h"

void AfisareOptiuni() {
    std::cout << "Optiuni: \n";
    std::cout << "1. Aventureaza-te sa treci strada intr-un loc\n"
                 "      plin de biciclete, masini si autobuze! [ATENTIE! in lucru]\n";

    std::cout << "2. Introducere un nou autobuz\n";
    std::cout << "3. Introducere o noua masina\n";
    std::cout << "4. Introducere o noua bicicleta\n";

    std::cout << "5. Afisare autobuze\n";
    std::cout << "6. Afisare masini\n";
    std::cout << "7. Afisare biciclete\n";

    std::cout << "8. Iesire\n";
}

int main() {
    Vehicul::Claxon();


    std::string optiune, mesaj;
    int op;

    Companie<Autobuz> STB; // companie cu autobuze
    Companie<Masina> Spark; // companie care inchiriaza masini
    Companie<Bicicleta> BikeRent; // companie care inchiriaza biciclete

    // sa vad daca merge clasa Sofer
    Sofer Gigel(40, 18, "ABC");
    std::cout << Gigel;
    Gigel.actualizare_varsta(41);
    std::cout << Gigel;
    Gigel.actualizare_categorie_permis("ABCDE");
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

    Autobuz::Claxon();
    Masina::Claxon();
    Bicicleta::Claxon();
    Masina::Service();

    STB.Claxoneaza();

    while(true) {
        AfisareOptiuni();
        try {
            std::cin >> optiune;

            op = stoim(optiune, "Optiunea introdusa nu este valida!"); // il face int si daca nu reuseste arunca logic error
            if(op < 1 || op > 8) // astea sunt optiunile valide
                throw conversie_nereusita("Optiunea introdusa nu este valida!");

            if(op == 1) {
                if (Masina::TreciStrada() == 1)
                    std::cout << "Pentru a putea folosi aceasta functie este necesar sa pui\n"
                                 "masinute.exe in fisierul principal (ala cu headere)\n";
            }

            else if(op == 2) {
                std::cin >> autobuz;
                STB.adauga(autobuz);
            }

            else if(op == 3) {
                std::cin >> masina;
                Spark.adauga(masina);
            }

            else if(op == 4) {
                std::cin >> bicicleta;
                BikeRent.adauga(bicicleta);
            }


            else if(op == 5)
                std::cout << STB;

            else if(op == 6)
                std::cout << Spark;

            else if(op == 7)
                std::cout << BikeRent;

            else if(op == 8)
                exit(0);
        }
        catch (std::logic_error &ex) {
            std::cout << "\n" << ex.what() << "\n\n";
        }
    }

}