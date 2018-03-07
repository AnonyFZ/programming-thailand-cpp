/*H* 0013.cpp [Seven Dwarves] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned a[10], sum = 0, b1, b2;
  for (unsigned i = 0; i < 9; i++)
    cin >> a[i], sum += a[i];
  for (unsigned i = 0; i < 9; i++) {
    for (unsigned j = i + 1; j < 9; j++) {
      if (sum - (a[i] + a[j]) == 100) {
        b1 = i;
        b2 = j;
        break;
      }
    }
  }

  for (unsigned i = 0; i < 9; i++) {
    if (i == b1 || i == b2)
      continue;
    cout << a[i] << endl;
  }

  exit(EXIT_SUCCESS);
}
