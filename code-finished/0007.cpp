/*H* 0007.cpp [Herman] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  double a;
  cin >> a;
  cout << fixed << setprecision(6);
  cout << a * a * M_PI << endl;
  cout << a * a * 2 << endl;
  exit(EXIT_SUCCESS);
}
