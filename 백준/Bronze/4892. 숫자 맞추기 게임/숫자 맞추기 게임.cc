#include <iostream>
using namespace std;

int main() {
  int n0;
  int numberup=1;

  while (cin >> n0 && n0 != 0) {
    int n1 = 3 * n0;
    int n2 = (n1 + 1) / 2;
    int n3 = 3 * n2;
    int n4 = n3 / 9;
    cout <<numberup<<". "<<((n1 % 2) ? "odd" : "even") << " " << n4 << endl;
    numberup++;
  }
  return 0;
}
