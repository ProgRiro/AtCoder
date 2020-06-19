#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> vec(N);
  int avg, sum = 0, sa;

  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
    sum += vec.at(i);
  }

  avg = sum / N;

  for (int i = 0; i < N; i++) {
    sa = vec.at(i) - avg;
    if (sa < 0) {
      sa *= -1;
    }
    cout << sa << endl;
  }
}