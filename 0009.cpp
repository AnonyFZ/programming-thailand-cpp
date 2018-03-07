/*H* 0009.cpp [ABC] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  string pat;
  unsigned a[3];
  cin >> a[0] >> a[1] >> a[2] >> pat;
  sort(a, a + 3);
  for (unsigned i = 0; i < 3; i++)
    cout << a[pat[i] - 'A'] << " ";
  cout << endl;

  exit(EXIT_SUCCESS);
}
