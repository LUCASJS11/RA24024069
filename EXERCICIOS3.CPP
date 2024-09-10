#include <iostream>
#include <locale>

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");

    double precoEtiqueta, precoFinal;
    int condicaoPagamento;

  cout << "Digite o preço do produto: ";
   cin >> precoEtiqueta;

    cout << "Escolha a condição de pagamento:\n";
    cout << "1 - À vista em dinheiro ou cheque (10% de desconto)\n";
    cout << "2 - À vista no cartão de crédito (15% de desconto)\n";
    cout << "3 - Em duas vezes (preço normal de etiqueta)\n";
    cout << "4 - Em duas vezes com 10% de juros\n";
    cout << "Digite o código da condição de pagamento: ";
    cin >> condicaoPagamento;

    switch (condicaoPagamento) {
        case 1:
            precoFinal = precoEtiqueta * 0.90; // 10% de desconto
            break;
        case 2:
            precoFinal = precoEtiqueta * 0.85; // 15% de desconto
            break;
        case 3:
            precoFinal = precoEtiqueta; // Preço normal
            break;
        case 4:
            precoFinal = precoEtiqueta * 1.10; // 10% de juros
            break;
        default:
                cout << "Código de condição de pagamento inválido." <<     endl;
            return 1;
    }

        cout << "\nO valor a ser pago é: R$ " << precoFinal <<  endl;

    return 0;
}
