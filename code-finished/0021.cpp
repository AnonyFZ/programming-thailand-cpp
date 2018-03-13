/*H* 0021.cpp [Kemija] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  string str, tmp, res = "";
  string pat[] = { "apa", "epe", "ipi", "opo", "upu" };
  unsigned i, j;
  getline(cin, str);

  for (i = 0; i < str.length(); i++) {
    tmp = str.substr(i, 3);
    for (j = 0; j < 5; j++) {
      if (tmp.compare(pat[j]) != 0) continue;
      tmp = tmp[0];
      str = str.replace(i, 3, tmp);
    }
  }
  cout << str << endl;

  exit(EXIT_SUCCESS);
}
