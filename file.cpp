  #include <bits/stdc++.h>
  using namespace std;

  int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str = "";
    str.reserve(1000001);
    for (int i = 0; i < 101; ++i) {
      string s(i, 'a');
      str += s;
    }
    return 0;
  }