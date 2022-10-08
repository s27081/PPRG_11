#include <iostream>
using namespace std;

int numb;

int main() {
  cout << "Podaj liczbę całkowitą: " << endl;
  cin >> numb;
  if (numb % 2 == 0){
    cout << "Liczba jest parzysta" << endl;
  }
  else if(numb == 0){
    cout << "Liczba jest żadna (0)" << endl;
  }else{
    cout << "Liczba jest nieparzysta" << endl;
  }

    return 0;
}