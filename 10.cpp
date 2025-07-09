// Example program
#include <iostream>
#include <string>
using namespace std;

float maior (float num1, float num2){
    float mais;
    if (num1 > num2){
        mais = num1;
        return mais;
    }else{
        mais = num2;
        return mais;
    }
}

int main()
{
   float n1;
   float n2;
   cout << "Digite dois valores reais de ate uma casa decimal: ";
   cin >> n1 >> n2;
   int res = maior(n1, n2);
   cout << "O maior entre eles e " << res << endl;
}

