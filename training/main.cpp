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

  // 文字列の分割
  cout
      << s1.substr(0, 3)
      << endl;  // substr(取り出し開始index, indexから何文字取り出すか) 非破壊的

  // 文字列の削除
  cout << s1.erase(0, 3)
       << endl;  // erase(削除開始index, indexから何文字削除するか) 破壊的

  // 文字列の挿入
  s1 = "hello";
  cout << s1.insert(1, "eeee")
       << endl;  // insert(挿入したいindex, 挿入したい文字列)

  // 文字列の検索
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

  // 文字列の置換
  cout << s1.replace(0, 2, "AA")
       << endl;  // replace(置換開始index, 置換する文字数, 置換したい文字列)

  // 文字列の比較（一致判断）
  s1 = "hello";
  if (s1 == "hello") {
    cout << ">> 一致" << endl;
  }
  if (s1[1] == 'e') {
    cout << ">> 一致" << endl;
  }

  // 文字列の比較（小文字大文字英数字判別）
  cout << "isalpha: " << isalpha('a') << endl;  //アルファベットかどうか
  cout << "isdigit: " << isdigit('8') << endl;  //数字かどうか
  cout << "islower: " << islower('a') << endl;  //小文字かどうか
  cout << "isupper: " << isupper('A') << endl;  //大文字かどうか

  // 文字列から数字型へ変換（1）
  istringstream ss1;
  int p1;
  ss1 = istringstream("12345");
  ss1 >> p1;
  cout << p1 << endl;

  // 文字列から数字型へ変換（2）
  int num = '8' - '0';
  cout << typeid(num).name() << endl;
  cout << typeid("abc").name() << endl;

  // 文字列の並び替え
  sort(s1.begin(), s1.end());
  cout << s1 << endl;
  sort(s1.begin(), s1.end(), greater<char>());
  cout << s1 << endl;

  // 数値の並び替え
  vector<int> vec = {1, 3, 2, 5, 4};
  sort(vec.begin(), vec.end());
  for (int n : vec) cout << n;
  cout << endl;
  sort(vec.begin(), vec.end(), greater<int>());
  for (int n : vec) cout << n;
  cout << endl;

  // 英文字をアルファベット順でN個後にずらして出力　
  s1 = "hello";
  int N = 2;
  for (char c : s1) cout << char(c + N);
  cout << endl;

  s1.push_back('o');
  cout << s1 << endl;
  s1.pop_back();
  cout << s1 << endl;
}

void bitFunc() {
  // 左シフト
  cout << (1 << 0) << endl;
  cout << (1 << 1) << endl;
  cout << (1 << 2) << endl;
  cout << (1 << 3) << endl;
  // 右シフト
  cout << (1 >> 0) << endl;
  cout << (1 >> 1) << endl;
  cout << (1 >> 2) << endl;
  cout << (1 >> 3) << endl;
  cout << endl;
  // 左シフト
  cout << (2 << 0) << endl;
  cout << (2 << 1) << endl;
  cout << (2 << 2) << endl;
  cout << (2 << 3) << endl;
  // 右シフト
  cout << (2 >> 0) << endl;
  cout << (2 >> 1) << endl;
  cout << (2 >> 2) << endl;
  cout << (2 >> 3) << endl;
  cout << endl;
  // 左シフト
  cout << (3 << 0) << endl;
  cout << (3 << 1) << endl;
  cout << (3 << 2) << endl;
  cout << (3 << 3) << endl;
  // 右シフト
  cout << (3 >> 0) << endl;
  cout << (3 >> 1) << endl;
  cout << (3 >> 2) << endl;
  cout << (3 >> 3) << endl;
  cout << endl;
}

int main() {
  // stringFunc();
  bitFunc();
}