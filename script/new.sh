#!/bin/bash

if [ -z "$1" ]; then
  echo "error: problem number!"
  exit
fi

cat <<EOF > $1.cpp
/*H* $1.cpp [problem_name] @ imkk *H*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  
  // code
  //

  exit(EXIT_SUCCESS);
}
EOF
