#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI acos(-1.0)
// #define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int i, j, cnt, max;
  string s;
  cin >> s;
  max = INT_MIN;
  for (i = 0; i < s.length(); i++) {
    cnt = 0;
    for (j = i; j < s.length(); j++) {
      if (s[j] == 'A' || s[j] == 'T' || s[j] == 'G' || s[j] == 'C')
        cnt++;
      else
        break;
    }
    if (cnt > max) max = cnt;
  }

  cout << max << endl;
}