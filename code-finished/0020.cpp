/*H* 0020.cpp [Pet] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  unsigned mx = 0, sum = 0, index = 0, a;

  for (unsigned i = 0; i < 5; i++) {
    for (unsigned j = 0; j < 4; j++) {
      cin >> a;
      sum += a;
    }
    if (mx < sum) {
      mx = sum;
      index = i + 1;
    }
    sum = 0;
  }
  cout << index << " " << mx << endl;
  
  exit(EXIT_SUCCESS);
}
