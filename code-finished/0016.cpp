/*H* 0016.cpp [Ptice] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  string persons[] = { "Adrian", "Bruno", "Goran" };
  string pat[] = { "ABC", "BABC", "CCAABB" };
  char ch;
  unsigned t, a[3] = {0}, mx =  0, i, c = 0;
  cin >> t;
  while (cin >> ch) {
    for (i = 0; i < 3; i++) {
      a[i] += (pat[i][c % pat[i].length()] == ch);
      mx = max(mx, a[i]);
    }
    c++;
  }
  cout << mx << endl;
  for (i = 0; i < 3; i++)
    if (a[i] == mx) cout << persons[i] << endl;

  exit(EXIT_SUCCESS);
}
