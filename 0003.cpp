/*H* 0003.cpp [Matrix Addition] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned m, n;
  cin >> m >> n;
  int *a = new int[m * n], b;
  for (unsigned i = 0; i < m * n; i++)
    cin >> a[i];
  for (unsigned i = 0; i < m * n; i++)
    cin >> b, a[i] += b;
  for (unsigned i = 1; i <= m * n; i++) {
    cout << a[i - 1] << " ";
    if (i % m == 0)
      cout << endl;
  }

  delete[] a;

  exit(EXIT_SUCCESS);
}
