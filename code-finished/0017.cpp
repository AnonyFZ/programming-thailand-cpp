/*H* 0017.cpp [Kornislav] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned a[4];
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  sort(a, a + 4);
  cout << a[0] * a[2] << endl;

  exit(EXIT_SUCCESS);
}
