// Example program
#include <iostream>
#include <string>
using namespace std;

void saudacao (std:: string name){
    cout << "Ola seja muito bem vindo e obrigado por estar lendo esta mensagem " << name << endl;
}

int main()
{
   std:: string nome;
   cout << "Digite seu nome: ";
   cin >> nome;
   saudacao(nome);
}

