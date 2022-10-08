#include <iostream>
using namespace std;

int numb;

int main() {
  cout << "Podaj liczbę całkowitą: " << endl;
  cin >> numb;
  if (numb > 0){
    cout << "Liczba całkowita jest dodatnia";
  }
  else if(numb < 0){
    cout << "Liczba całkowita jest ujemna";
  }
  else{
    cout << "Liczba jest równa 0";
  }

  return 0;
}