#include <iostream>
#include <locale>

int main() {

    setlocale(LC_ALL, "portuguese");

    char letra;

    std::cout << "Digite uma letra minuscula: ";
    std::cin >> letra;

    // Verifica se a letra � uma vogal
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        std::cout << "A letra '" << letra << "' � uma vogal." << std::endl;
    } else {
        std::cout << "A letra '" << letra << "' n�o � uma vogal." << std::endl;
    }

    return 0;


}
