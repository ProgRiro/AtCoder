#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int N;
  string str;
  cin >> N;
  vector<int> s(4, 0);
  for (int i = 0; i < N; ++i) {
    cin >> str;
    if (str == "AC") {
      s[0]++;
    } else if (str == "WA") {
      s[1]++;
    } else if (str == "TLE") {
      s[2]++;
    } else {
      s[3]++;
    }
  }

  cout << "AC x " << s[0] << endl;
  cout << "WA x " << s[1] << endl;
  cout << "TLE x " << s[2] << endl;
  cout << "RE x " << s[3] << endl;
}