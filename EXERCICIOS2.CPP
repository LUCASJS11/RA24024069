#include <iostream>
#include <locale> // Necessário para usar setlocale

int main() {
    // Configura o locale para português
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double operando1, operando2, resultado;
    char operador;

    std::cout << "Digite o primeiro operando: ";
    std::cin >> operando1;

    std::cout << "Digite o operador (+, -, *, /): ";
    std::cin >> operador;

    std::cout << "Digite o segundo operando: ";
    std::cin >> operando2;

    switch (operador) {
        case '+':
            resultado = operando1 + operando2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '-':
            resultado = operando1 - operando2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '*':
            resultado = operando1 * operando2;
            std::cout << "Resultado: " << resultado << std::endl;
            break;
        case '/':
            if (operando2 != 0) {
                resultado = operando1 / operando2;
                std::cout << "Resultado: " << resultado << std::endl;
            } else {
                std::cout << "Erro: Divisão por zero não é permitida." << std::endl;
            }
            break;
        default:
            std::cout << "Operador inválido." << std::endl;
            break;
    }

    return 0;
}
