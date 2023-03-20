#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream plik("tekst.txt");
  char haslo[50];
  while (plik >> haslo) {
    int dlugosc = string(haslo).length();
    cout << haslo << endl << dlugosc << endl;
    cout << "Ascii: " << endl;
    for (int a = 0; a < dlugosc; a++) {
      cout << (int)haslo[a] << " " << haslo[a] << endl;
    }
  }
  plik.close();
  return 0;
}
