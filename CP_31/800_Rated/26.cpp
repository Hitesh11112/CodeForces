#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  while (a != 0) {
    int preA = a;
    a = b % a;
    b = preA;
  }
  return b;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int test;
  cin >> test;

  while (test--) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &i : arr) {
      cin >> i;
    }
    sort(arr.begin(), arr.end());
    vector<int> even, odd;
    for (int i = 0; i < n; ++i) {
      if (arr[i] % 2 == 0) {
        even.emplace_back(arr[i]);
      } else {
        odd.emplace_back(arr[i]);
      }
    }
    bool flag = 0;
    for (int i = 0; i < arr.size(); ++i) {
      for (int j = i+1; j < arr.size(); ++j) {
        int ele = gcd(arr[i],arr[j]);
        if (ele <= 2) {
          flag = 1;
          break;
        }
      }
    }
    if (flag) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }

  return 0;
}