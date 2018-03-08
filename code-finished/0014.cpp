/*H* 0014.cpp [Great Common Divisor] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

unsigned gcd(unsigned a, unsigned b) {
  if (a == 0 || b == 0)
    return 0;
  if (a == b)
    return a;
  if (a > b)
    return gcd(a - b, b);
  return gcd(a, b - a);
}

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned a, b;
  cin >> a >> b;
  cout << gcd(a, b) << endl;

  exit(EXIT_SUCCESS);
}
