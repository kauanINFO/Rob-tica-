// Example program
#include <iostream>
#include <string>
using namespace std;



int main()
{
    const double bonus = 0.2; //ou 20%
    double sal;
    cout << "Informe seu salario: ";
    cin >> sal;
    double res = (sal * bonus) + sal;
    cout << "Seu novo salario e: " << res << endl;
}

