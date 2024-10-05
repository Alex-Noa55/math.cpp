


#include <iostream>

int main() {
    int nombre;
    std::cout << "Entrez un nombre : " << std::endl;
    std::cin >> nombre;
    int factoriel = 1;
    for (int i = 1; i <= nombre; i++) {
        factoriel *= i;;
    }
    std::cout << "Le factoriel de " << nombre << "est" << factoriel << std::endl;

    return 0;
}

