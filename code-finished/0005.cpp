/*H* 0005.cpp [Pythagorus] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  double a, b;
  cin >> a >> b;
  cout << fixed << setprecision(6) << sqrt(a * a + b * b) << endl;

  exit(EXIT_SUCCESS);
}
