// Example program
#include <iostream>
#include <string>
using namespace std;

int dobro (int *x){
    int num = *x;
    int dob = num * 2;
    return dob;
}

int main()
{
  int num1;
  cout << "Informe um numero: ";
  cin >> num1;
  int res = dobro(&num1);
  cout << "O valor dobrado e " << res << endl;
  return 0;
}
