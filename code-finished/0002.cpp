/*H* 0002.cpp [Min Max] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned t;
  int a, mn = INT_MAX, mx = INT_MIN;
  cin >> t;
  while (t--) {
    cin >> a;
    mn = min(mn, a);
    mx = max(mx, a);
  }

  cout << mn << endl;
  cout << mx << endl;
  
  exit(EXIT_SUCCESS);
}
