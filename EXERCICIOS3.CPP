#include <iostream>
#include <locale>

using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");

    double precoEtiqueta, precoFinal;
    int condicaoPagamento;

  cout << "Digite o pre�o do produto: ";
   cin >> precoEtiqueta;

    cout << "Escolha a condi��o de pagamento:\n";
    cout << "1 - � vista em dinheiro ou cheque (10% de desconto)\n";
    cout << "2 - � vista no cart�o de cr�dito (15% de desconto)\n";
    cout << "3 - Em duas vezes (pre�o normal de etiqueta)\n";
    cout << "4 - Em duas vezes com 10% de juros\n";
    cout << "Digite o c�digo da condi��o de pagamento: ";
    cin >> condicaoPagamento;

    switch (condicaoPagamento) {
        case 1:
            precoFinal = precoEtiqueta * 0.90; // 10% de desconto
            break;
        case 2:
            precoFinal = precoEtiqueta * 0.85; // 15% de desconto
            break;
        case 3:
            precoFinal = precoEtiqueta; // Pre�o normal
            break;
        case 4:
            precoFinal = precoEtiqueta * 1.10; // 10% de juros
            break;
        default:
                cout << "C�digo de condi��o de pagamento inv�lido." <<     endl;
            return 1;
    }

        cout << "\nO valor a ser pago �: R$ " << precoFinal <<  endl;

    return 0;
}
