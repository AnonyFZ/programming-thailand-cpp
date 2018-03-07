/*H* 0004.cpp [Character Checker] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  char ch;
  unsigned sm = 0, lg = 0;

  while (cin >> ch) {
    sm += (ch >= 'a' && ch <= 'z');
    lg += (ch >= 'A' && ch <= 'Z');
  }

  if (!sm && lg)
    cout << "All Capital Letter";
  else if (sm && !lg)
    cout << "All Small Letter";
  else
    cout << "Mix";
  cout << endl;

  exit(EXIT_SUCCESS);
}
