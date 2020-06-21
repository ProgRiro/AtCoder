#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define N 10

int main() {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      vec.at(i) = N - i;
    } else {
      vec.at(i) = i;
    }
  }
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  swap(vec.at(0), vec.at(9));
  for (int i = 0; i < N; i++) {
    cout << vec.at(i) << endl;
  }
  return 0;
}

/*
STLとは
C++ではminの他にも様々な関数が用意されており、多くの機能を自分でプログラムを書くこと無く利用できます。
C++で用意されている、関数等がまとまっているもののことをSTL (Standard Template
Library)といいます。
 */