#include <iostream>
using namespace std;

int numb1;
int numb2;
int numb3;

int main() {
  cout << "Podaj liczbę całkowitą: " << endl;
  cin >> numb1;
  cout << "Podaj drugą liczbę całkowitą: " << endl;
  cin >> numb2;
  cout << "Podaj trzecią liczbę całkowitą: " << endl;
  cin >> numb3;

  if(numb1 > numb2 && numb1 > numb3){
    cout << "Najwiękasza liczba to: " << numb1;
  }
  else if(numb2 > numb1 && numb2 > numb3){
    cout << "Najwiękasza liczba to: " << numb2;
  }
   else if (numb3 > numb2 && numb3 > numb1){
    cout << "Najwiękasza liczba to: " << numb3;
   }
  return 0;
}