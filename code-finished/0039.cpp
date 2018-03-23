/*H* 0039.cpp [Food] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  // code
  unsigned fact[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
  unsigned n, a, b, ignore[10] = {false};
  unsigned i, j, k;
  cin >> n >> a;

  for (i = 0; i < a; i++) {
    cin >> b;
    ignore[b] = true;
  }

  unsigned temp[n];
  for (i = 1; i <= n; i++) {
    if (ignore[i]) continue;
    for (j = 0; j < n; j++) {
      temp[j] = j + 1;
      if (j < i) swap(temp[0], temp[j]);
    }
    for (j = 0; j < fact[n - 1]; j++) {
      for (k = 0; k < n; k++)
        cout << temp[k] << " ";
      cout << "\n";
      next_permutation(temp, temp + n);
    }
  }

  exit(EXIT_SUCCESS);
}
