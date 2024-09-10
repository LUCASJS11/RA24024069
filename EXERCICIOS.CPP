#include <iostream>
#include <locale>

int main() {

    setlocale(LC_ALL, "portuguese");

    char letra;

    std::cout << "Digite uma letra minuscula: ";
    std::cin >> letra;

    // Verifica se a letra é uma vogal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        std::cout << "A letra '" << letra << "' é uma vogal." << std::endl;
    } else {
        std::cout << "A letra '" << letra << "' não é uma vogal." << std::endl;
    }

    return 0;


}
