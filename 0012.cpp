/*H* 0012.cpp [Okviri] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void print(string str, unsigned len) {
  char ch;
  bool v = false;
  unsigned i, j;
  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= len; j++) {
      ch = (j % 3 == 0) ? '*' : '#';
      switch (i) {
        case 1:
        case 5:
          cout << ".." << ch << ".";
          break;
        case 2:
        case 4:
          cout << "." << ch << "." << ch;
          break;
        case 3:
          cout << (v ? '*' : ch) << "." << str[j - 1] << ".";
          v = (j % 3 == 0);
          break;
      }
    }
    switch (i) {
      case 3:
        cout << ch;
        break;
      default:
        cout << ".";
    }
    cout << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  string str;
  cin >> str;

  print(str, str.length());

  exit(EXIT_SUCCESS);
}
