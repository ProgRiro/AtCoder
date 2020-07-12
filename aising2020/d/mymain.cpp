#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define ll long long
// #define PI acos(-1.0)
#define PI 3.14159265358979323846264338327950L
#define FOR(I, A, B) for (int I = (A); I < (B); ++I)

int main() {
  int n, cnt = 0, sum = 0, k, jcnt = 0, res = 0;
  string x;
  cin >> n >> x;
  vector<int> tmp_x(n);
  for (int i = 0; i < n; i++) {
    res = 0;
    for (int j = 0; j < n; j++) {
      if (i == j)
        tmp_x[j] = (x[j] == '0' ? 1 : 0);
      else
        tmp_x[j] = (x[j] == '0' ? 0 : 1);
    }
    sum = 0;
    k = 1;
    for (int j = n - 1; j >= 0; j--) {
      if (tmp_x[j] == 1) sum += k;
      k *= 2;
    }
    while (sum > 0) {
      jcnt = 0;
      for (int j = 0; j < n; j++)
        if (tmp_x[j] == 1) jcnt++;
      sum %= jcnt;
      res++;
    }
    cout << res << endl;
  }
}