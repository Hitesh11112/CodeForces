#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int num, limit, except;
    cin >> num >> limit >> except;
    // 2 2 1

    vector<int> arr;
    for (int i = 1; i <= limit; ++i) {
      if (i != except) {
        arr.push_back(i);
      }
    }
    int flag = 0;
    reverse(arr.begin(), arr.end());
    map<int, int> fre, storeFre;
    function<void(int, int, map<int, int>)> rec = [&](int index, int sum,
                                                      map<int, int> fre) {
      if (flag == -1 || index >= arr.size()) {
        return;
      }
      if (sum == num) {
        storeFre = fre;
        flag = -1;
      }
      if (sum + arr[index] <= num) {
        fre[arr[index]] += 1;
        rec(index, sum + arr[index], fre);
        fre[arr[index]] -= 1;
      }
      rec(index + 1, sum, fre);
    };

    rec(0, 0, fre);
    if (storeFre.size() == 0) {
      cout << "No" << '\n';
    } else {
      cout << "Yes" << '\n';
      int ele = 0;
      for (auto i : storeFre) {
        ele += i.second;
      }
      cout << ele << '\n';
      for (auto i : storeFre) {
        for (int j = 0; j < i.second; ++j) {
          cout << i.first << ' ';
        }
      }
      cout << '\n';
    }
  }
  return 0;
}
