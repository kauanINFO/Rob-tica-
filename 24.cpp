// Example program
#include <iostream>
#include <string>
using namespace std;

void media(int *ptr, int quant){
    int ini;
    double med;
    for (int cont = 0; cont < quant; cont++){
        if (cont == 0){
           ini =  ptr[cont];
        }
      med = (med + ptr[cont]);
    }
    cout << "O vetor comeca no numero: " << ini << " e a sua media e: " << med << endl;
}

int main()
{
    int vet[10]  = {10, 32, 67, 54, 89, 2, 7, 98, 54, 1};
    media(vet, 10);
}
