#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream plik("tekst.txt");
  char haslo[35];
  while (plik >> haslo) {
    cout << haslo << endl;
  }
  plik.close();
  return 0;
}