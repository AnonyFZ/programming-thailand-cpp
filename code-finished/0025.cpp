/*H* 0025.cpp [BUKA] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  // code
  string a, b;
  char ch;
  cin >> a >> ch >> b;
  unsigned l1 = a.length(), l2 = b.length();
  if (l1 < l2) {
    swap(a, b);
    swap(l1, l2);
  }

  if (ch == '*') {
    cout << a;
    for (unsigned i = 0; i < l2 - 1; i++)
      cout << '0';
  } else if (ch == '+') {
    if (l1 == l2) {
      a[0] = '2';
      cout << a;
    } else {
      cout << a.substr(0, l1 - l2);
      for (unsigned i = 0; i < l2; i++)
        cout << b[i];
    }
  }
  cout << endl;

  exit(EXIT_SUCCESS);
}
