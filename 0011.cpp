/*H* 0011.cpp [Modulo] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned a, c = 0;
  bool v[43] = { false };
  for (unsigned i = 0; i < 10; i++) {
    cin >> a;
    a %= 42;
    c += !v[a];
    v[a] = true;
  }
  cout << c << endl;

  exit(EXIT_SUCCESS);
}
