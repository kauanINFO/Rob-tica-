// Example program
#include <iostream>
#include <string>
using namespace std;

void val(int num1){
   num1 = 669;
   cout << "O valor trocado por valor fica " << num1 << endl;
}

void ref(int &alg){
   alg = 544;
   cout << "O valor trocado por referencia fica " << alg << endl;
}

int main()
{
   int n1;
   cout << "informe um valor: ";
   cin >> n1;
   val(n1);
   ref(n1);

}

