/*H* 0032.cpp [numbers] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  // code
  unsigned a;
  cin >> a;
  string str;
  char ch;
  while (cin >> ch)
    str += ch;
  sort(str.begin(), str.end());
  string::iterator it = str.begin();
  if (*it == '0')
    for (string::iterator i = str.begin() + 1; i != str.end(); i++)
    {
      if (*i == '0') continue;
      swap(*it, *i);
      break;
    }
  cout << str << endl;

  exit(EXIT_SUCCESS);
}
