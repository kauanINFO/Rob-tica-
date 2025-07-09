// Example program
#include <iostream>
#include <string>
using namespace std;

void area(double x, double y){
    double ar = x * y;
    cout << "O valor da area do retangulo: " << ar << endl;
}

int main()
{
    double comp;
    double alt;
    cout << "Digite o valor do comprimento e da altura do retangulo: ";
    cin >> comp >> alt;
    area(comp, alt);
}

