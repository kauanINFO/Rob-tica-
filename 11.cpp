// Example program
#include <iostream>
#include <string>
using namespace std;



int main()
{
  int num1;
  cout << "Digite um numero: ";
  cin >> num1;
  int *ptr = &num1;
  int pr = *ptr;
  cout << "O enderco da variavel e " << ptr << " e o seu valor e " << pr << endl;
}

