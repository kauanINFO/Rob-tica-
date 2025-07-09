// Example program
#include <iostream>
#include <string>
using namespace std;

void oposto(double &n){
   double dvi = (n * (-n)) / n;
   if (dvi >= 0){
      cout << "O oposto desse numero e " << dvi << endl;
   }else{
      cout << "O oposto desse numero e " << dvi << endl;
   }
}

int main()
{
    double num;
    cout << "Digite um valor: " ;
    cin >> num;
    oposto(num);
}
