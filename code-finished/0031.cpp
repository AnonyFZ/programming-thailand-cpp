/*H* 0031.cpp [jelly] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  // code
  unsigned a[3], count = 0;
  cin >> a[0] >> a[1] >> a[2];

  do {
    sort(a, a + 3);
    a[2] /= 2;
    count++;
  } while (a[2] >= 1);
  cout << count - 1 << "\n";

  exit(EXIT_SUCCESS);
}
