/*H* 0029.cpp [frog] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  // code
  unsigned a, b;
  cin >> a >> b;
  if (a > b)
    cout << 2 << endl;
  else
    cout << (b / a) + ((b % a) != 0);
  cout << endl;

  exit(EXIT_SUCCESS);
}
