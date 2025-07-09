#include <iostream>
#include "funcoes2.h"

int main() {
    int numero = 10;

    std::cout << "Valor original: " << numero << std::endl;

    exibirValor(numero);  // Passagem por valor (não altera a variável)
    std::cout << "Depois da exibirValor: " << numero << std::endl;

    dobrarValor(numero);  // Passagem por referência (altera a variável)
    std::cout << "Depois da dobrarValor: " << numero << std::endl;

    triplicarValor(&numero); // Passagem por ponteiro (altera a variável)
    std::cout << "Depois da triplicarValor: " << numero << std::endl;

    return 0;
}