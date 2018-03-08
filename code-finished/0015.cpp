/*H* 0015.cpp [Skocimis] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  int a, b, c;
  cin >> a >> b >> c;
  cout << max(abs(a - b), abs(b - c)) - 1 << endl;

  exit(EXIT_SUCCESS);
}
