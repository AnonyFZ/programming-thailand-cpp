/*H* 0028.cpp [worldcup] @ imkk *H*/

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

#define N_TEAM 4

struct TEAM {
  string name;
  unsigned point[N_TEAM];
  unsigned score = 0;
  unsigned active = 0, passive = 0;
  int diff;
};

typedef struct TEAM team;

bool cmp(team a, team b) {
  if (a.score == b.score) {
    if (a.diff == b.diff)
      return a.active > b.passive;

    return a.diff > b.diff;
  }

  return a.score > b.score;
}

int main() {
  ios_base::sync_with_stdio(false);

  // code
  team t[N_TEAM];
  for (unsigned i = 0; i < N_TEAM; i++)
    cin >> t[i].name;

  for (unsigned i = 0; i < N_TEAM; i++)
    for (unsigned j = 0; j < N_TEAM; j++) {
      cin >> t[i].point[j];
      t[i].active += t[i].point[j];
    }

  for (unsigned i = 0; i < N_TEAM; i++) {
    for (unsigned j = 0; j < N_TEAM; j++) {
      if (i != j) {
        t[i].passive += t[j].point[i];

        if (t[i].point[j] == t[j].point[i])
          t[i].score += 1;
        else if (t[i].point[j] > t[j].point[i])
          t[i].score += 3;
      }
    }

    t[i].diff = t[i].active - t[i].passive;
  }

  sort(t, t + N_TEAM, cmp);

  for (unsigned i = 0; i < N_TEAM; i++)
    cout << t[i].name << " " << t[i].score << endl;

  exit(EXIT_SUCCESS);
}
