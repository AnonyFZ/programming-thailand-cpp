/*H* 0038.cpp [Toppykung] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  // code
  unsigned t;
  set <string> st;
  string str;
  cin >> t;
  while (t--) {
    cin >> str;
    st.insert(str);
    sort(str.begin(), str.end());
  }

  for (set<string>::iterator it = st.begin(); it != st.end(); ++it) {
    cout << *it << "\n";
  }

  exit(EXIT_SUCCESS);
}
