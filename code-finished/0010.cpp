/*H* 0010.cpp [Trik] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned b = 1;
  char ch;
  while (cin >> ch) {
    switch (ch) {
      case 'A':
        switch (b) {
          case 1: b = 2; break;
          case 2: b = 1; break;
        }
        break;
      case 'B':
        switch (b) {
          case 2: b = 3; break;
          case 3: b = 2; break;
        }
        break;
      case 'C':
        switch (b) {
          case 1: b = 3; break;
          case 3: b = 1; break;
        }
        break;
    }
  }
  cout << b << endl;
  
  exit(EXIT_SUCCESS);
}
