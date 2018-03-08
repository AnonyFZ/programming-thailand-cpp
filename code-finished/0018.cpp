/*H* 0018.cpp [Reseto] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <bitset>

using namespace std;

#define PN 1001
bitset<PN> prime;

void sieveOfEratosthenes() {
  unsigned p, i;
  prime.set();
  for (p = 2; p * p <= PN; p++)
    if (prime[p] == true)
      for (i = p * 2; i <= PN; i += p)
        prime[i] = false;
}

int main()
{
  ios_base::sync_with_stdio(false);

  // code
  sieveOfEratosthenes();
  unsigned a, b, i, j, c = 0;
  bool v[PN] = { false }, o = false;
  cin >> a >> b;
  for (i = 2; i <= a && !o; i++) {
    if (!prime[i]) continue;
    for (j = i; j <= a; j += i) {
      if (v[j]) continue;
      c++;
      v[j] = true;
      if (c >= b) {
        cout << j << endl;
        o = true;
        break;
      }
    }
  }

  exit(EXIT_SUCCESS);
}
