#include <iostream>
#include <format>
using namespace std;

int main() {
  int n, avgFull;
  int ctr = 0;
  
  cout << "Entra 10 enteros: ";

  for (int i = 0; i < 10; i++) {
    cin >> n;
    avgFull = avgFull + n;
    ctr++;
  }

  cout << format("Promedio de los numeros: {}\n", avgFull / 10);
  return 0;
}
