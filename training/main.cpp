#include <bits/stdc++.h>
using namespace std;

void stringFunc() {
  // 文字列操作
  string s1 = "hello";
  string s2 = "world";
  string emp = "";
  char c = s1[1];
  cout << c << endl;
  cout << s1.size() << endl;
  cout << emp.empty() << endl;
  cout << s1 + " " + s2 << endl;
  cout
      << s1.substr(0, 3)
      << endl;  // substr(取り出し開始index, indexから何文字取り出すか) 非破壊的
  cout << s1.erase(0, 3)
       << endl;  // erase(削除開始index, indexから何文字削除するか) 破壊的
  s1 = "hello";
  cout << s1.insert(1, "eeee")
       << endl;  // insert(挿入したいindex, 挿入したい文字列)
  s1 = "hello";
  cout
      << s1.find("l")
      << endl;  // 見つかった場合は最初のindex、見つからなかった場合はstring::nposが返る
  cout << s1.find("a") << " " << endl;  // 18446744073709551615 = npos =
  // -1(size_type(= unsigned
  // int)のとりうる最大値、補数表現の最大値と-1が等価になるため)
  if (s1.find("a") == string::npos) {
    cout << "npos" << endl;
  }
  if (s1.find("a") == -1) {
    cout << "npos" << endl;
  }
  cout << s1.replace(0, 2, "AA") << endl;
}

int main() { stringFunc(); }