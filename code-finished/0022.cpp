/*H* 0022.cpp [star] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  int i, j, a;
  cin >> a;
  for (i = 0; i < (a + 1) / 2; i++) {
    for (j = 1; j <= (!(a % 2) ? a - 1 : a); j++) {
      if (j == (i + (a + 1) / 2) || j == ((a + 1) / 2 - i))
        cout << '*';
      else
        cout << '-';
    }
    cout << endl;
  }

  for (i = (a / 2) - 1; i >= 0 ; i--) {
    for (j = 1; j <= (!(a % 2) ? a - 1 : a); j++) {
      if (j == (i + (a + 1) / 2) || j == ((a + 1) / 2 - i))
        cout << '*';
      else
        cout << '-';
    }
    cout << endl;
  }

  exit(EXIT_SUCCESS);
}
