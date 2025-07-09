// Example program
#include <iostream>
#include <string>
using namespace std;

void quadrado(int n){
    int q;
    q = n * n;
    cout << "O quadrado desse numero e: " << q << endl;
}


int main()
{
    int num;
    cout << "Informe um numero inteiro: ";
    cin >> num;
    quadrado(num);
}
