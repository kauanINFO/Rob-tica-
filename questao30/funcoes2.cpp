#include <iostream>
void exibirValor(int valor) {
    std::cout << "Dentro de exibirValor: " << valor << std::endl;
    valor = 999; // Isso não afeta a variável original
}

void exibirValor(int valor) {
    std::cout << "Dentro de exibirValor: " << valor << std::endl;
    valor = 999; // Isso não afeta a variável original
}

void triplicarValor(int* valor) {
    if (valor != nullptr) {
        *valor *= 3; // Altera o valor original usando ponteiro
    }
}