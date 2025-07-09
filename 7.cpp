// Example program
#include <iostream>
#include <string>
using namespace std;

int teste(int y){
    if (y % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int main()
{
   int n1;
   cout << "Informe um valor: ";
   cin >> n1;
   bool res = teste(n1);
   cout << res << endl;
   return 0;
}

