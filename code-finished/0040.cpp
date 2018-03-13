/*H* 0040.cpp [prime-odd] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <iterator>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned t;
  string num;
  string::iterator it;
  cin >> t;
  while (t--) {
    cin >> num;
    it = num.end() - 1;
    cout << ( ((*it - '0') % 2 == 1) || (num.compare("2") == 0) ? 'T' : 'F' ) << endl;
  }

  exit(EXIT_SUCCESS);
}
