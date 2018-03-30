/*H* 0030.cpp [three-eleven] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

inline unsigned toNumber(char ten, char one) {
  unsigned sum = 0;
  if (ten >= '0' && ten <= '9') sum += (ten - '0') * 10;
  if (one >= '0' && one <= '9') sum += (one - '0');
  return sum;
}

int main() {
  ios_base::sync_with_stdio(false);

  // code
  string str;
  cin >> str;
  unsigned sum = 0, ten;
  unsigned len = str.length();
  for (int i = len - 1; i >= 0; i -= 2) {
    ten = (i - 1 >= 0) ? str[i - 1] : '0';
    sum += toNumber(ten, str[i]);
  }
  cout << sum % 3 << " " << sum % 11 << "\n";

  exit(EXIT_SUCCESS);
}
