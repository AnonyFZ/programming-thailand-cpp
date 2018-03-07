/*H* 0001.cpp [Grading] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned a, b, c, sum;
  cin >> a >> b >> c;
  sum = a + b + c;
  if (sum >= 80 && sum <= 100) cout << "A";
  else if (sum >= 75 && sum <= 79) cout << "B+";
  else if (sum >= 70 && sum <= 74) cout << "B";
  else if (sum >= 65 && sum <= 69) cout << "C+";
  else if (sum >= 60 && sum <= 64) cout << "C";
  else if (sum >= 55 && sum <= 59) cout << "D+";
  else if (sum >= 50 && sum <= 54) cout << "D";
  else cout << "F";
  cout << endl;

  exit(EXIT_SUCCESS);
}
