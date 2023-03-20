#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream plik("tekst.txt");
  char haslo[35];
  while (plik >> haslo) {
    int dlugosc = string(haslo).length();
    cout << haslo << endl << dlugosc << endl;
  }
  plik.close();
  return 0;
}