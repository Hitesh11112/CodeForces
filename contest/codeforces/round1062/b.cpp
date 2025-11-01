#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);

    vector<int> arr1(26);
    vector<int> arr2(26);

    for (int i = 0; i < n; ++i) {
      arr1[s[i] - 'a'] += 1;
    }
    for (int i = n + 1; i < 2 * n + 1; ++i) {
      arr2[s[i] - 'a'] += 1;
    }
    int b = 0;
    for (int i = 0; i < 27; ++i) {
      if (arr1 != arr2) {
        b = 1;
      }
    }
    cout << (b == 0 ? "YES" : "NO") << endl;
  }

  return 0;
}