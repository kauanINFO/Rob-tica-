// Example program
#include <iostream>
#include <string>
using namespace std;
//obs: professor tem algumas questões em que eu coloquei pra ler o valor da variável quando a questão não pedia tem problema isso? foi só pra treinar leituras de dados no c++


int main()
{
   const double pi = 3.14;
   double raio;
   cout << "Digite o valor do raio: ";
   cin >> raio;
   double area = (raio * raio) * pi;
   cout << area << endl;
}
