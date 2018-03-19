/*H* 0023.cpp [DATUM] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);

  // code
  string date[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
  unsigned month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  unsigned d, m;
  cin >> d >> m;

  unsigned sum_d = d;
  for (unsigned i = 0; i < m; i++)
    sum_d += month[i];
  cout << date[sum_d % 7] << endl;

  exit(EXIT_SUCCESS);
}
