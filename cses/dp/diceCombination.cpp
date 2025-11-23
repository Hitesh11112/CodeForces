#include <bits/stdc++.h>
using namespace std;

const long long Module = 1000000007;

long long sovleBottomUp() {}

long long solveTopDown(int n, vector<long long> &arr) {
  // base condition
  if (n == 0) {
    return 1;
  }
  if (n < 0)
    return 0;

  // Check for the Repetition
  if (arr[n] != -1)
    return arr[n];

  // algo
  long long cnt = 0;
  for (int i = 1; i <= 6; ++i) {
    if (n >= i) {
      cnt = (cnt + solveTopDown(n - i, arr)) % Module;
    }
  }
  arr[n] = cnt;
  return cnt;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  // vector<long long> arr1(n + 1, -1);
  // cout << solveTopDown(n, arr1) << endl;
  vecotr<long long> arr2();
  cout << sovleBottomUp() << endl;

  return 0;
}